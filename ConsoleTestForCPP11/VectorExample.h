#pragma once

#include <vector>

class CVectorExample
{
public:
	CVectorExample();
	virtual ~CVectorExample();

	void init();

	void testFOREACH();

	void testSort();

	void testIter();

	std::vector<int> m_vecValue;
};

