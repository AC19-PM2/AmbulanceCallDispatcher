#include "Crew.h"
#include <iostream>



using namespace std;

Crew::Crew()
{
	doctor = new char[100];
	paramedic = new char[100];
	driver = new char[100];
	
}

void Crew::CrewList()
{
	
}


Crew::~Crew()
{
	delete [] doctor;
	delete [] paramedic;
	delete [] driver;
}
