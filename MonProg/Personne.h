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
	string getPrenom();
	void setPrenom(string prenom);
	string getNom();
	void setNom(string nom);
	int getAge();
	void setAge(int age);
protected:
	string prenom;
	string nom;
	int age;
	int nbDonut;
};

