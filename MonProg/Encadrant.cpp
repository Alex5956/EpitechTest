#include "Encadrant.h"

Encadrant::Encadrant()
{
}

Encadrant::Encadrant(string prenom, string nom, int age, int nbDonut)
{
	this->prenom = prenom;
	this->nom = nom;
	this->age = age;
	this->nbDonut = nbDonut;
}

 void Encadrant::augmenterNombreDeDonut(Encadrant& encadrant)
{
	encadrant.setNombreDeDonut(encadrant.nbDonut+1);
	
}
