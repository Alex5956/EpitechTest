#include "Etudiant.h";

Etudiant::Etudiant()
{


}

Etudiant::Etudiant(string prenom, string nom, int age, int nbDonut)
{
	this->prenom = prenom;
	this->nom;
	this->age = age;
	this->nbDonut;
}

void Etudiant::AugmenterNombreDeDonut(Etudiant &etudiant, int nombredeDonut) {
	etudiant.setNombreDeDonut(nombredeDonut + 1);
}
