#include "Brigand.h"
#include "Dame.h"
#include "Humain.h"
#include "Cowboy.h"
#include <string>
#include <iostream>

using namespace std;


Brigand::Brigand(const string n, const string bF, const string co) :Humain(n, bF), comportement(co)
{

}

string Brigand::getComportement() const
{
	return comportement;
}

int Brigand::getNbDamesEnlevees() const
{
	return nbDamesEnlevees;
}

int Brigand::getRecompense() const
{
	return recompense;
}

void Brigand::sePresente() const
{
	cout << "Bonjour, je suis " << getNom() << " le " << comportement << " et j'aime le " << getBoissonFavorite() << endl;
}

void Brigand::kidnappe(Dame& dame)
{
	cout << "Ah ah ! " << dame.getnom() << "tu est mienne désormais !" << endl;
	nbDamesEnlevees++;
}

void Brigand::seFaitEmprisonne(Cowboy& cowboy)
{
	enPrison = true;
	cout << "Damned, je suis fait ! " << cowboy.getNom() << "tu m'a eu !" << endl;
}

void Brigand::augmenteRecompense(const int prix)
{
	recompense = recompense + prix;
}

void Brigand::diminueRecompense(const int prix)
{
	recompense = recompense - prix;
}

bool Brigand::estEnPrison() const
{
	return enPrison;
}
