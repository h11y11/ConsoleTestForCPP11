#include "stdafx.h"
#include "Parent.h"
#include <iostream>
using namespace std;
Parent::Parent()
{
}


Parent::~Parent()
{
}

void Parent::printMsg()
{
	cout << "Parent" << endl;
}

void Child::printMsg()
{
	cout << "child" << endl;

}

void testParentChild()
{
    Parent *ob = new Child;
    ob->printMsg();
    (*ob).printMsg();

    Parent o2 = *ob;
    o2.printMsg();

    Parent o3 = Child();
    o3.printMsg();

    Parent &o4 = Child();
    o4.printMsg();

    Parent &o5 = *ob;
    o5.printMsg();;

    Parent *o6 = (Parent*) new Child;
    o6->printMsg();
}
