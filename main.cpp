#include <iostream>
#include "Crew.h"
#include "Call.h"
#include "CrewList.cpp"
#include "Crew.cpp"


using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Russian");
	int a;
	char nameopen;
	
	cout<<"1. Вывод списка экипажей."<<endl;
	cout<<"2. Назначить экипажи на смену."<<endl;
	cout<<"3. Просмотреть информацию о занятости экипажей."<<endl;
	cout<<"4. Принять вызов."<<endl;
	cout<<"5. Просмотреть историю вызовов."<<endl;
	cout<<"6. Измененить список экипажа."<<endl;
	cout<<"7. "<<endl;// Прошло N часов.
	cout<<"8. Выход"<<endl;
	cout<<"Выберите действие :"<<endl;
	
	
	
	
	do {
		
		cin>>a;
		switch(a)
		{
			case(1):
			{
				CrewList();
				break;
			}	
			case(2):
			{
				break;
			}	
			case(3):
			{
				break;
			}	
			case(4):
			{
				break;
			}	
			case(5):
			{
				break;
			}	
			case(6):
			{
				break;
			}	
			case(7):
			{
				break;
			}	
			case(8):
			{
				exit(1);
			}
			default:
			{
				cout<<endl;
				cout<<"Некорректный ввод, попробуйте снова."<<endl;
			}	
			
		}		
		
		cout<<"1"<<endl;
		cout<<"2"<<endl;
		cout<<"3"<<endl;
		cout<<"4"<<endl;
		cout<<"5"<<endl;
		cout<<"6"<<endl;
		cout<<"7"<<endl;
		cout<<"8"<<endl;
		cout<<"Выберите действие :"<<endl;
		
		
	}while(a!=8);
	
	
	
	
	
	
	return 0;
}
