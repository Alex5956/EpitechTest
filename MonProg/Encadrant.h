#pragma once
#include "Pedago.h"
#include <iostream>
#include <string>
#include "Personne.h"
using namespace std;
class Encadrant : public Pedago
{
public:
	Encadrant();
	Encadrant(string prenom, string nom, int age, int nbDonut);
	void augmenterNombreDeDonut(Encadrant& encadrant, int nombreDeDonut);
};

