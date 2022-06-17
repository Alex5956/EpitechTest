#include "Encadrant.h"

Encadrant::Encadrant()
{
}

Encadrant::Encadrant(string prenom, string nom, int age, int nbDonut)
{
	Personne::prenom = prenom;
	Personne::nom = nom;
	Personne::age = age;
	Personne::nbDonut = nbDonut;
}
