#include"runok.h"
#include <regex>
#include<iostream>


using namespace std;
namespace Program
{
runok::runok(void){
  

    cout << "\nThis is the normal constructor" <<endl;

}

runok::runok(char*namekniga,char*avtorkniga, float vartist) :
	Name(namekniga),Avtor(avtorkniga),Vartist(vartist){

		cout << "\nThis is a parameterized constructor" <<endl;
}

   
runok::runok(const runok &obj )
{
	cout << "Score:\t" <<obj.Avtor << "\nName:\t" << obj.Name << "\nVartist:\t" << obj.Vartist << endl;
    
}


void runok::setAvtor(char*av)
{
	Avtor=av;
}

char*runok::getAvtor()
{
return Avtor;
}

void runok::setName(char*name)
{
	Name=name;
}

char*runok::getName()
{
	return Name;

}

float runok::getVartist()
{
	return Vartist;
}

void runok::setVartist(float v)
{
 Vartist =v;
}


runok::~runok(void){
	 

	cout << "\nThis is the normal destructor" << endl;
}
}
