#include "Aer.h"
using namespace std; 

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


void augmenterNombreDeDonut(Aer& aer, int nombreDeDonut)
{
	aer.setNombreDeDonut(nombreDeDonut + 1);
}
