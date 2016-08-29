#include "stdafx.h"
#include "StdStringExample.h"


CStdStringExample::CStdStringExample()
{
}


CStdStringExample::~CStdStringExample()
{
}

void CStdStringExample::init()
{
	m_str = "abcdefghijklmnopqrstuvwxyz0123456789";
	m_wstr = L"abcdefghijklmnopqrstuvwxyz0123456789";
}

void CStdStringExample::testFuc()
{
	std::string tempStr(10, '0');
	m_str.replace(m_str.begin() + 3, m_str.begin() + 10, tempStr.begin(), tempStr.begin() + 3);
}
