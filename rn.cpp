# include<iostream>
#include "runok.h"

using namespace std;
using Program::runok;

int main(float argc, char**argv)
{
	setlocale(LC_CTYPE, "rus");

	runok*g= new runok();
	runok obj;
  
	g->setVartist(123.5);
	g->setAvtor("Kant");
	g->setName("Krutuka teorii sudgen");


	obj.setVartist(124.5);
	obj.setAvtor("King");
	obj.setName("TemnaBashna");

	cout<<"Avtor: "<<obj.getAvtor()<< endl;
	cout<<"Name: "<<obj.getName()<< endl;
	cout<<"Vartist: "<<obj.getVartist()<< endl;
	
	system("pause");

	return 0;
}