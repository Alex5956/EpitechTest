#include "Aer.h"
Aer::Aer()
{
}

Aer::Aer(string prenom, string nom, int age, int nbDonut)
{
	this->prenom=prenom;
	this->nom = nom;
	this->age = age;
	this->nbDonut = nbDonut;
}



void Aer::augmenterNombreDeDonut(Aer& aer)
{
	aer.setNombreDeDonut(aer.nbDonut+ 1);
	
	
}
