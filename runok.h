#include <iostream>
#include <string>

#pragma once
namespace Program
{
class runok
{
private:
    char* Name;
	char* Avtor ;
	float Vartist;

public:
   runok(char*,char*, float);
   runok (const runok& obj);
	runok(void);
	void setAvtor(char*);
	char* getAvtor();
	void setName(char*); 
	char* getName();
	float getVartist();
	void setVartist(float);
	~runok(void);

	

};

}


