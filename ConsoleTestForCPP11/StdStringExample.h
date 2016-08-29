#pragma once

#include <string>

class CStdStringExample
{
public:
	CStdStringExample();
	virtual ~CStdStringExample();

	void init();

	void testFuc();

	std::string m_str;
	std::wstring m_wstr;
};

