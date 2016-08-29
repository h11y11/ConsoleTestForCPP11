#include "stdafx.h"
#include "MapExample.h"
#include <iterator>


CMapExample::CMapExample()
{
}


CMapExample::~CMapExample()
{
}

void CMapExample::init()
{
	m_mapValue.clear();
	m_mapValue[0] = "safsssda";
	m_mapValue[2] = "312dfa";
	m_mapValue[4] = "saf231da";
	m_mapValue[22] = "sad2131";

	//find(m_mapValue.begin(), m_mapValue.end(), make_pair(3, "32131"));
}


void CMapExample::testFOREACH()
{
	for each(auto &iter in m_mapValue)
	{
		cout << iter.first << " " << iter.second << endl;
	}
	cout << endl;

	for (auto &iter : m_mapValue)
	{
		cout << iter.first << " " << iter.second << endl;
	}
	cout << endl;
    
	//fill_n(back_inserter(m_mapValue), 0, make_pair(0, "ads"));



    
}
