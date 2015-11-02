
#include <iostream>
#include "CPU.h"
#include "Motherboard.h"
#include "Ram.h"


class PersonalComputer
{

private:
	CPU m_cCPU;
	Motherboard m_cMotherboard;
	RAM m_cRAM;

public:
	PersonalComputer::PersonalComputer(int nCPUSpeed, char *strMohterboardModel, int RAMSize)
	:m_cCPU(nCPUSpeed), m_cMotherbaord(strMohterboardModel), m_cRAM(RAMSize)

{
}
};




