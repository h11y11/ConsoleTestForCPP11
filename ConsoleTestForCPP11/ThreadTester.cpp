#include "stdafx.h"
#include "ThreadTester.h"
#include <thread>
#include <iostream>
#include <string>

using namespace std;

ThreadTester::ThreadTester()
{
}


ThreadTester::~ThreadTester()
{
}

void call_from_thread(int v1, string v2) 
{

	std::cout << "Hello, World" << v1 << v2 << std::endl;

}

void ThreadTester::test()
{
	//Launch a thread

	//启动一条线程

	std::thread t1(call_from_thread, 123, "safd");

	//Join the thread with the main thread

	//和主线程协同

	t1.join();

}
