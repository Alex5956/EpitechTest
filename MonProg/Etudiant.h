#pragma once
#include <iostream>
#include <string>
#include <list>

using namespace std;

class Etudiant
{	
public:
	
	Etudiant(string prenom, string nom, int age,int nbDonut);
	
	static void AugmenterNombreDeDonut(Etudiant *etudiant, int nombreDeDonut);
	void setNombreDeDonut(int nb);
	int getNombreDeDonut();
private:
	
	string prenom;
	string nom;
	int age; 
	int nbDonut;
};

