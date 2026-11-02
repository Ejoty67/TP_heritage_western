#include "Humain.h"
#include <string>
#include <iostream>
using namespace std;

Humain::Humain(const string n, const string bF)
{
	nom = n;
	boissonFavorite = bF;
}

void Humain::parle(const string text) {
	cout << text;
}

string Humain::getBoissonFavorite() {

	return boissonFavorite;
}

void Humain::setBoissonFavorite(const string NouvelleBoissonFavorite) {
	boissonFavorite = NouvelleBoissonFavorite;
}

void Humain::sePresenter() {
	cout << "Bonjour je suis " << nom << " ma boisson favorite est le " << boissonFavorite<<endl;
}

void Humain::boire() {
	cout << "Ah ! un bon verre de " << boissonFavorite << " ! GLOUPS!\n";
}

string Humain::getNom() {

	return nom;
}


/*
=============================
  Methode de la classe Dame
=============================

*/


Dame::Dame(const string n, const string bF, const string cR):Humain(n, bF)
{
	nom = n;
	boissonFavorite = bF;
	couleurRobe = cR;
}

string Dame::getnom() const
{
	return "Miss " + nom;
}

string Dame::getEtat() const
{
	return etat;
}

void Dame::sePresente() const
{
	cout << "(" << nom << ") -- " << "Bonjour, je suis " << getnom() << " et j' ai une jolie robe " << couleurRobe << endl;

}

void Dame::changeDeRobe(const string cR)
{
	this->couleurRobe = cR;
	cout << "(" << nom << ") -- " << "Regardez ma nouvelle robe " << couleurRobe << " !" <<endl;
}


/*
=============================
  Methode de la classe Cowboy
=============================

*/

Cowboy::Cowboy(const string n, const string bF):Humain(n, bF)
{
	nom = n;
	boissonFavorite = bF;
}

void Cowboy::sePresente()
{
	cout << "Bonjour, je suis le " << adjectif << " " << nom << " et j'aime le " << boissonFavorite << endl;
}

int Cowboy::getpopularite()
{
	return populariter;
}

void Cowboy::setpopularite(int nb)
{
	populariter = nb;
}

