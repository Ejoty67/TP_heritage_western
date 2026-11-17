#include "Cowboy.h"
#include "Dame.h"
#include "Humain.h"
#include "Brigand.h"
#include <string>
#include <iostream>

using namespace std;



Cowboy::Cowboy(const string n, const string bF) :Humain(n, bF)
{

}

void Cowboy::sePresente()
{
	cout << "Bonjour, je suis le " << adjectif << " " << getNom() << " et j'aime le " << getBoissonFavorite() << endl;
}

void Cowboy::incrementePopularite()
{
	populariter++;
}

void Cowboy::decrementePopularite()
{
	populariter--;
}

void Cowboy::tire(const Brigand& brigand)
{
	cout << "Le vaillant " << getNom() << " tire sur " << brigand.getNom() << endl;
}

void Cowboy::emprisonne(Brigand& brigand)
{
	brigand.seFaitEmprisonne(*this);
}

void Cowboy::libere(Dame& dame)
{
	cout << "Le" << adjectif << " " << getNom() << " libere " << dame.getnom() << endl;
}


int Cowboy::getpopularite()
{
	return populariter;
}

void Cowboy::setpopularite(int nb)
{
	populariter = nb;
}

string Cowboy::getQualite()
{
	return adjectif;
}

void Cowboy::setQualite(const string qualite)
{
	adjectif = qualite;
}