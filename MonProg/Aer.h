#pragma once
#include "Etudiant.h"
#include "Pedago.h"
#include "Personne.h"

class Aer :  public Pedago 
{
public:
	Aer();
	Aer(string prenom, string nom, int age, int nbDonut);
	void augmenterNombreDeDonut(Aer& aer, int nombreDeDonut);
};

