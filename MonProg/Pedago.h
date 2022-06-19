#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>
#include "Personne.h"


using namespace std;
class Pedago : public Personne
{
public:
	Pedago();
	Pedago(string prenom, string nom, int age, int nbDonut);
    void augmenterNombreDeDonut(Pedago& pedago);

};

