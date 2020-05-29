#include <iostream>
#include <fstream>
#include "Crew.h"
#include "Call.h"
#include "Crew.cpp"


using namespace std;

int main(int argc, char** argv) {
	
	setlocale(LC_ALL, "Russian");
	int a;
	char nameopen;
	
	cout<<"1. vivod spiska ekip."<<endl;
	cout<<"2. naznachit ekip na smenu."<<endl;
	cout<<"3. info pro zaniatost ekip."<<endl;
	cout<<"4. priniat' vizov."<<endl;
	cout<<"5. istoria vizovov."<<endl;
	cout<<"6. izmenenie spuiska ekip."<<endl;
	cout<<"7. "<<endl;// proshlo N chasov.
	cout<<"8. vihod"<<endl;
	cout<<"Viberete deistv :"<<endl;
	Crew CL;
	
	
	
	do {
		
		cin>>a;
		system("cls");
		switch(a)
		{
			case(1):
			{
			 	CL.CrewList();
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
				cout<<"nekorektnii vvod, povtorite."<<endl;
			}	
			
		}		
		
		cout<<"1 vivod spiska ekip"<<endl;
		cout<<"2 naznachit ekip na smenu."<<endl;
		cout<<"3 info pro zaniatost ekip."<<endl;
		cout<<"4 priniat' vizov."<<endl;
		cout<<"5 istoria vizovov."<<endl;
		cout<<"6 izmenenie spuiska ekip. "<<endl;
		cout<<"7"<<endl; // proshlo N chasov.
		cout<<"8 vihod"<<endl;
		cout<<"Viberete deistv :"<<endl;
		
		
	}while(a!=8);
	
	
	
	
	
	
	return 0;
}
