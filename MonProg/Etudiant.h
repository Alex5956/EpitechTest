#pragma once
#include <iostream>
#include <string>
#include <list>
#include "Personne.h";

class Etudiant : public Personne
{	
public:
	
	Etudiant();
	Etudiant(string prenom, string nom, int age, int nbDonut);
	void augmenterNombreDeDonut(Etudiant &etudiant);



};

