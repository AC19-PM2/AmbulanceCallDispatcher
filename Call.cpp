#include "Call.h"
#include <iostream>


using namespace std;


Call::Call()
{
	adress= new char[100];
	
	
}

Call::~Call()
{
	delete [] adress;
}

void Call::CrewList()
{
	
}
