#include "Pedago.h"

Pedago::Pedago()
{

}

Pedago::Pedago(string prenom, string nom, int age, int nbDonut)
{
	Personne::prenom = prenom;
	Personne::nom = nom;
	Personne::age = age;
	Personne::nbDonut = nbDonut;
}
