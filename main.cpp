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
	
	cout<<"1. ����� ������ ��������."<<endl;
	cout<<"2. ��������� ������� �� �����."<<endl;
	cout<<"3. ����������� ���������� � ��������� ��������."<<endl;
	cout<<"4. ������� �����."<<endl;
	cout<<"5. ����������� ������� �������."<<endl;
	cout<<"6. ���������� ������ �������."<<endl;
	cout<<"7. "<<endl;// ������ N �����.
	cout<<"8. �����"<<endl;
	cout<<"�������� �������� :"<<endl;
	
	
	
	
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
				cout<<"������������ ����, ���������� �����."<<endl;
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
		cout<<"�������� �������� :"<<endl;
		
		
	}while(a!=8);
	
	
	
	
	
	
	return 0;
}
