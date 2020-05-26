#include <iostream>
#include <fstream>
#include "Crew.h"
#include "Crew.cpp"

using namespace std;


int CrewList()//CrewList(char *nameopen)
{
	Crew p;
	int N=0;
	fstream cl;
	cl.open("baseCall.txt", ios::in);//cl.open(nameopen, ios::in);
	if (!cl) {
		cout<<"Ошибка в заданном имени файла."<<endl;
		return 0;
	}
	//Crew *rPtr;
	//Crew();
	
	while(cl>>p.doctor>>p.paramedic>>p.driver)
	{
		N++;
		cout<<"Экипаж номер "<<N<<":"<<endl;
		cout<<p.doctor<<" "<<p.paramedic<<"  "<<p.driver<<endl;//Вывод перегрузкой потом
	} 
	cl.close();
	return N;
	
	
}

