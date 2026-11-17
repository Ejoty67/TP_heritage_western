#include "Dame.h"
#include "Humain.h"
#include "Brigand.h"
#include "Cowboy.h"
#include <string>
#include <iostream>

using namespace std;

Dame::Dame(const string n, const string bF, const string cR) :Humain(n, bF)
{

	couleurRobe = cR;
	etat = "libre";
}

void Dame::hurle()
{
	cout << getnom() << " hurle\n";
}

void Dame::remercie(const Cowboy& heros)
{
	cout << "Merci" << heros.getNom();
}



string Dame::getnom() const
{
	return "Miss " + getNom();
}

string Dame::getEtat() const
{
	return etat;
}

void Dame::sePresente() const
{
	cout << "(" << getNom() << ") -- " << "Bonjour, je suis " << getnom() << " et j' ai une jolie robe " << couleurRobe << endl;

}

void Dame::changeDeRobe(const string cR)
{
	this->couleurRobe = cR;
	cout << "(" << getnom() << ") -- " << "Regardez ma nouvelle robe " << couleurRobe << " !" << endl;
}

void Dame::seFaitKidnapper()
{
	etat = "kidnappee";
	cout << "Au secours, je me fais kidnapper !";
}

void Dame::seFaitLiberer(Cowboy& cowboy)
{
	cout << "Merci " << cowboy.getNom() << ", je suis enfin libre !" << endl;
}