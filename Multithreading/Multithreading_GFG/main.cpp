// C++ program to demonstrate multithreading using three different callables. 
// Callables: Function pointer, function object, Lambda expression

/*
Syntax: 
std::thread thread_object (callable);
*/

#include <iostream>
#include <thread>
using namespace std;

// A dummy function
void foo(int Z)
{
for (int i = 0; i < Z; i++)
{
	cout << "Thread using function"
			" pointer as callable\n";
}
}

// A callable object
class thread_obj {
public:
	void operator()(int x)
	{
	for (int i = 0; i < x; i++)
		cout << "Thread using function"
				" object as callable\n";
	}
};

// Driver code
int main()
{
cout << "Threads 1 and 2 and 3 "
		"operating independently" << endl;

// This thread is launched by using
// function pointer as callable
thread th1(foo, 3); // thread th1 starts running
// th1.join(); // waits for thread th1 to complete execution and then only move forward

// This thread is launched by using
// function object as callable
thread th2(thread_obj(), 3); // thread th2 starts running
// th2.join(); // waits for thread th2 to complete execution and then only move forward

// Define a Lambda Expression
auto f = [](int x)
{
	for (int i = 0; i < x; i++)
	cout << "Thread using lambda"
			" expression as callable\n";
};

// This thread is launched by using
// lambda expression as callable
thread th3(f, 3); // thread th3 starts running
// th3.join(); // waits for thread th3 to complete execution and then only move forward


// Wait for the threads to finish
// Wait for thread t1 to finish
th1.join();

// Wait for thread t2 to finish
th2.join();

// Wait for thread t3 to finish
th3.join();

return 0;
}
