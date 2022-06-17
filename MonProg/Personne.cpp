#include "Personne.h"






Personne::Personne()
{
	this->prenom = "Alexandre";
	this->nom = "Marillesse";
	this->age = 27;
	this->nbDonut = 0;
}

Personne::Personne(string prenom, string nom, int age, int nbDonut)
{
	this->prenom = prenom;
	this->nom = nom;
	this->age = age;
	this->nbDonut = nbDonut;
}

void Personne::setNombreDeDonut(int nb)
{
}

int Personne::getNombreDeDonut()
{
    return 0;
}
