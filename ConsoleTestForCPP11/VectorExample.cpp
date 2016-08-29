#include "stdafx.h"
#include "VectorExample.h"
#include <iostream>
#include <algorithm>
using namespace std;

CVectorExample::CVectorExample()
{
}


CVectorExample::~CVectorExample()
{

}

void CVectorExample::init()
{
	m_vecValue.clear();
	m_vecValue = std::vector<int>{ 5, 4, 3, 5, 8, 9 ,6 };

}

void CVectorExample::testFOREACH()
{
//  use iterator
// 	for (auto iter = m_vecValue.begin(); iter != m_vecValue.end(); ++iter)
// 	{
// 		use *iter;
// 	}


//	for each (auto iter in m_vecValue)
// 	for(auto &iter : m_vecValue)
// 	{
// 		std::cout << iter << " ";
// 	}

	//使用匿名函数的for_each
	for_each(begin(m_vecValue), end(m_vecValue), [](int& iter) {
		std::cout << iter << " ";
	});

	std::cout << std::endl;
}

void CVectorExample::testSort()
{
	auto comp = [](const int& w1, const int& w2)
	{ return w1 < w2; };

	//sort(m_vecValue.begin(), m_vecValue.end());
	sort(m_vecValue.begin(), m_vecValue.end(), comp);
}

void CVectorExample::testIter()
{
	for (auto iter = m_vecValue.begin(); iter != m_vecValue.end(); ++iter)
	{
//***** not use like this
// 		m_vecValue.insert(iter, 999);
// 		++iter;
// 		++iter;

//***** use like this
		iter = m_vecValue.insert(iter, 2, 999);
		++iter;
		++iter;
	}

}
