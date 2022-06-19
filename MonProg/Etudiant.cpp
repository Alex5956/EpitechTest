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

void Etudiant::augmenterNombreDeDonut(Etudiant &etudiant) {
	etudiant.setNombreDeDonut(etudiant.nbDonut + 1);
	
}
