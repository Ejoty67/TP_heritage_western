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

string Humain::getBoissonFavorite() const {

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

string Humain::getNom() const {

	return nom;
}