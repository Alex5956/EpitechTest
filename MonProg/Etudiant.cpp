#include "Etudiant.h";

Etudiant::Etudiant(string prenom, string nom, int age,int nbDonut) {
	this->prenom = prenom;
	this->nom = nom;
	this->age = age;
	this->nbDonut = nbDonut;
}


void Etudiant::AugmenterNombreDeDonut(Etudiant &etudiant, int nombredeDonut) {
	etudiant.setNombreDeDonut(nombredeDonut + 1);
}

void Etudiant::setNombreDeDonut(int nb)
{
	this->nbDonut = nb;
}

int Etudiant::getNombreDeDonut()
{
	return  this->nbDonut;
}

