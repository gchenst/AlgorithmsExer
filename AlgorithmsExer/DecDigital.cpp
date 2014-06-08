#include "StdAfx.h"
#include "DecDigital.h"
#include <iostream>

DecDigital::DecDigital(string digitalA, string digitalB) :
    m_DigitalA(digitalA),
    m_DigitalB(digitalB)
{
    for (size_t i = 0; i < m_DigitalA.size() + 1; ++ i)
    {
        m_DigitalC.append("0");
    }
}

DecDigital::~DecDigital(void)
{
}

const string& DecDigital::getResult()
{
    int x = 0;
    for (int i = m_DigitalA.size() - 1; i >= 0; -- i)
    {
        int a = m_DigitalA.at(i) - '0';
        int b = m_DigitalB.at(i) - '0';
        int c = m_DigitalC.at(i + 1) - '0';
        x = static_cast<int>((a + b + c) / 2);

        m_DigitalC.at(i + 1) = '0' + (a + b + c) % 2;
        m_DigitalC.at(i) = '0' + x;
    }
    return m_DigitalC;
}
