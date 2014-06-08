#pragma once
#include <string>

using namespace std;

class DecDigital
{
public:
    DecDigital(string digitalA, string digitalB);
    virtual ~DecDigital(void);

    const string& getResult();

private:
    string m_DigitalA;
    string m_DigitalB;
    string m_DigitalC;
};

