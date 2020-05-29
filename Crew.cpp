#include "Crew.h"
#include <iostream>
#include <fstream>




using namespace std;

Crew::Crew()
{
	doctor = new char[100];
	paramedic = new char[100];
	driver = new char[100];
	
}

int Crew::CrewList()//
{
	
	Crew p;
	int N=0;
	fstream cl;
	cl.open("baseCall.txt", ios::in);//cl.open(nameopen, ios::in);
	if (!cl) {
		cout<<"������ � �������� ����� �����."<<endl;
		return 0;
	}

	while(cl>>p.doctor>>p.paramedic>>p.driver)
	{
		N++;
		cout<<"������ ����� "<<N<<":"<<endl;
		cout<<p.doctor<<" "<<p.paramedic<<"  "<<p.driver<<endl;//����� ����������� �����
	} 
	cl.close();
	return N;
	
}


Crew::~Crew()
{
	delete [] doctor;
	delete [] paramedic;
	delete [] driver;
}
