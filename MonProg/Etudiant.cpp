#include "Etudiant.h";

Etudiant::Etudiant()
{


}

Etudiant::Etudiant(string prenom, string nom, int age, int nbDonut)
{
	Personne::prenom = prenom; 
	Personne::nom; 
	Personne::age = age;
	Personne::nbDonut; 
}

void Etudiant::AugmenterNombreDeDonut(Etudiant &etudiant, int nombredeDonut) {
	etudiant.setNombreDeDonut(nombredeDonut + 1);
}
