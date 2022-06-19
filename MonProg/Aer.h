#pragma once
#include "Pedago.h"
#include <iostream>
#include <string>
#include "Personne.h"

class Aer :  public Pedago
{
public:
	Aer();
	Aer(string prenom, string nom, int age, int nbDonut);
	void augmenterNombreDeDonut(Aer& aer);
	
};
