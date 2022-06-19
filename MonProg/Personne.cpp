#include "Personne.h"
using namespace std;



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

string Personne::getPrenom()
{
	return this->prenom;
}

void Personne::setPrenom(string prenom)
{
	this->prenom = prenom;
}

string Personne::getNom()
{
	return this->nom;
}

void Personne::setNom(string nom)
{
	this->nom = nom; 
}

int Personne::getAge()
{
	return this->age;
}

void Personne::setAge(int age)
{
	this->age = age;
}

