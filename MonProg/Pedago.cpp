#include "Pedago.h"

Pedago::Pedago()
{

}

Pedago::Pedago(string prenom, string nom, int age, int nbDonut)
{
	this->prenom = prenom;
	this->nom = nom;
	this->age = age;
	this->nbDonut = nbDonut;
}

 void Pedago::augmenterNombreDeDonut(Pedago& pedago, int nombreDeDonut)
{
	pedago.setNombreDeDonut(nbDonut+ 1);
}


