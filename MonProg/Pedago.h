#pragma once
#include <stdlib.h>
#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;
class Pedago
{
public:
	Pedago(string prenom, string nom, int age, int nbDonut);
private:
	string prenom;
	string nom; 
	int age;
	int nbDonut; 
};

