#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;
class Personne
{
public:
	Personne();
	Personne(string prenom,string nom ,int  age ,int nbDonut);
	void setNombreDeDonut(int nb);
	int getNombreDeDonut();
protected:

	string prenom;
	string nom;
	int age;
	int nbDonut;
};

