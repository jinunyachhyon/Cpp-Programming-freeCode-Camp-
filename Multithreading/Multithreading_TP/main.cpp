/*Thread-based multitasking deals with the concurrent execution of pieces of the same program.*/

/*
This tutorial assumes that you are working on Linux OS 
and we are going to write multi-threaded C++ program using POSIX. 
POSIX Threads, or Pthreads provides API which are available on many Unix-like POSIX systems 
such as FreeBSD, NetBSD, GNU/Linux, Mac OS X and Solaris.
*/

#include <iostream>
#include <cstdlib>
#include <pthread.h>

using namespace std;

#define NUM_THREADS 5

void *PrintHello(void *threadid) {
   long tid;
   tid = (long)threadid;
   cout << "Hello World! Thread ID, " << tid << endl;
   pthread_exit(NULL);
}

int main () {
   pthread_t threads[NUM_THREADS]; //pthread_t -- thread identifier
   int rc;
   int i;
   
   for( i = 0; i < NUM_THREADS; i++ ) {
      cout << "main() : creating thread, " << i << endl;
      void *arg = (void *)i;
      /*
      (void *)i: This is a typecast. 
      It converts the integer value i to a pointer to void (void *). 
      The reason for this is that thread functions in POSIX threads (Pthreads) 
      expect their arguments to be of type void *. 
      */

      rc = pthread_create(&threads[i], NULL, PrintHello, arg);
      
      if (rc) {
         cout << "Error:unable to create thread," << rc << endl;
         exit(-1);
      }
   }
   pthread_exit(NULL);
}

/*
pthread_create (thread, attr, start_routine, arg) 
    - thread -- unique identifier of thread
    - attr -- thread attribute
    - start_routine -- The C++ routine that the thread will execute once it is created.
    - arg -- A single argument that may be passed to start_routine.

pthread_exit (status) 
*/