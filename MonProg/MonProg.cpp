// MonProg.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Etudiant.h"
#include "Aer.h"
#include "Encadrant.h"
#include "Pedago.h"
#include "Personne.h"
#include <type_traits>
#include <vector>


using namespace std;
static string genString(int length);
template<typename Type>
void static augmenterNombreDeDonut(Type& entree, int nbDonut);
template<typename Base, typename T>
inline bool instanceof(const T* ptr);
int nombreDeDonu = 0;
int chocolat = 0;
int main()
{
    vector <Personne*> personnes;
    for (int i = 0; i < 233; i++) {
        string prenom = genString(8);
        string nom = genString(8);
        int ageEtudiant=rand() % (35 - 18 + 1) + 18;
        Etudiant unEtudiant(prenom, nom, ageEtudiant, 0);
        personnes.push_back(&unEtudiant);
    }
    for (int i = 0; i < 15; i++) {
        string prenom = genString(8);
        string nom = genString(8);
        int agePedago = rand() % (35 - 18 + 1) + 18;
        Aer monAer(prenom, nom, agePedago, 0);
        personnes.push_back(&monAer);
        
    }
    for (int i = 0; i < 11; i++) {
        string prenom = genString(8);
        string nom = genString(8);
        int agePedago= rand() % (35 - 18 + 1) + 18;
        Encadrant monEncadrant(prenom, nom, agePedago, 0);
        personnes.push_back(&monEncadrant);
        
    }
    for (vector<Personne*>::iterator it = personnes.begin(); it != personnes.end(); it++) {
        augmenterNombreDeDonut(*it,0);
        //augmenterNombreDeDonut(it, 0);
    }
}
template<typename Type>
void static augmenterNombreDeDonut(Type &entree, int nbDonut) {
    nombreDeDonu += 1;
   
    if (instanceof<Aer>(entree)) {
       Aer entree = static_cast<Aer>(entree);
       Aer unAer();;
       unAer.augmenterNombreDeDonut(entree, nbDonut);
        if (chocolat < 17) {
            chocolat += 2;

        }
        else {
            chocolat += 1;
        }

    }
    if (instanceof<Encadrant>(entree)) {
        Encadrant entree = static_cast<Encadrant>(entree);
        Encadrant unEncadrant();
        unEncadrant.augmenterNombreDeDonut(entree, nbDonut);

    }

}
static string genString(int length) {
    static const char alphanum[] =
        "abcdefghijklmnopqrstuvwxyz";
    string chaine;
    chaine.reserve(length);
    for (int i = 0; i < length; i++) {
        chaine+= alphanum[rand() % (sizeof(alphanum) - 1)];
    }
    return chaine; 
}
template<typename Base, typename T>
inline bool instanceof(const T* ptr) {
    return dynamic_cast<const Base*>(ptr) != nullptr;
}

// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage

// Astuces pour bien démarrer : 
//   1. Utilisez la fenêtre Explorateur de solutions pour ajouter des fichiers et les gérer.
//   2. Utilisez la fenêtre Team Explorer pour vous connecter au contrôle de code source.
//   3. Utilisez la fenêtre Sortie pour voir la sortie de la génération et d'autres messages.
//   4. Utilisez la fenêtre Liste d'erreurs pour voir les erreurs.
//   5. Accédez à Projet > Ajouter un nouvel élément pour créer des fichiers de code, ou à Projet > Ajouter un élément existant pour ajouter des fichiers de code existants au projet.
//   6. Pour rouvrir ce projet plus tard, accédez à Fichier > Ouvrir > Projet et sélectionnez le fichier .sln.
