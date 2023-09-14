#include <iostream>
#include <cstdlib>
#include <pthread.h>
#include <unistd.h>

/*
There are following two routines which we can use to join or detach threads −

pthread_join (threadid, status) 
pthread_detach (threadid) 

The pthread_join() subroutine blocks the calling thread until the specified 'threadid' thread terminates. 
When a thread is created, one of its attributes defines whether it is joinable or detached. 
Only threads that are created as joinable can be joined. 
If a thread is created as detached, it can never be joined.
*/

using namespace std;

#define NUM_THREADS 5

void *wait(void *t) {
   int i;
   long tid;

   tid = (long)t;

   sleep(1);
   cout << "Sleeping in thread " << endl;
   cout << "Thread with id : " << tid << "  ...exiting " << endl;
   pthread_exit(NULL);
}

int main () {
   int rc;
   int i;
   pthread_t threads[NUM_THREADS];
   pthread_attr_t attr; // thread attribute object that will be used to set thread attributes
   void *status; // store the exit status of the threads when they join

   // Initialize and set thread joinable
   /*
   Initialize the thread attribute object attr and set it to make the threads joinable. 
   This means that you can later wait for these threads to finish using pthread_join.
   */
   pthread_attr_init(&attr);
   pthread_attr_setdetachstate(&attr, PTHREAD_CREATE_JOINABLE);

   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      rc = pthread_create(&threads[i], &attr, wait, (void *)i );
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }

   // free attribute and wait for the other threads
   /*
   After creating all threads, you destroy the thread attribute object attr since you no longer need it.
   */
   pthread_attr_destroy(&attr);

   for( i = 0; i < NUM_THREADS; i++ ) {
      rc = pthread_join(threads[i], &status); // blocks the main thread until the specified thread (threads[i]) completes
      if (rc) {
         cout << "Error:unable to join," << rc << endl;
         exit(-1);
      }
      cout << "Main: completed thread id :" << i ;
      cout << "  exiting with status :" << status << endl;
   }

   cout << "Main: program exiting." << endl;
   pthread_exit(NULL);
}