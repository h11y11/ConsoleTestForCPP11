#pragma once
class Parent
{
public:
	Parent();
	~Parent();
	virtual void printMsg();
};

class Child : public Parent
{
public:
	virtual void printMsg();
};

class ctTest
{
public:
    ctTest(const ctTest & ct2);

};

void testParentChild();