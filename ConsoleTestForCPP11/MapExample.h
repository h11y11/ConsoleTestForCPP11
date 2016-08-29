#pragma once

#include <map>
#include <string>
#include <iostream>

using namespace std;

class CMapExample
{
public:
	CMapExample();
	virtual ~CMapExample();

	std::map<int, string> m_mapValue;
	
	void init();
	int a[100];

	void testFOREACH();
};

