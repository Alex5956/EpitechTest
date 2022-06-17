#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Personne.h"
using namespace std;

class Etudiant : public Personne
{	
public:
	
	Etudiant();
	Etudiant(string prenom, string nom, int age, int nbDonut);
	static void AugmenterNombreDeDonut(Etudiant &etudiant, int nombreDeDonut);



};

