#include "Arme.h"
#include <string>
#include <iostream>
using namespace std;

Arme::Arme(const string n, int p, int c, int nbB)
{
	nom = n;
	prix = p;
	capacite = c;
	nbBalles = nbB;
}

string Arme::getNom()
{
	return nom;
}

int Arme::getPrix()
{
	return prix;
}

int Arme::getNbBalles()
{
	return nbBalles;
}

void Arme::tire()
{
	nbBalles--;
	cout << "Pan !\n";
}

void Arme::recharge(int nb)
{
	nbBalles = nb;
}
