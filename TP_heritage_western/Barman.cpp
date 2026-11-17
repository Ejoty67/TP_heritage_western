#include "Barman.h"
#include "Humain.h"
#include <string>
#include <iostream>

using namespace std;


string Barman::terminePhrase() const
{
	return " mon gars. ";
}

Barman::Barman(const string n, const string bF, const string nB) :Humain(n, bF)
{
	nomBar = nB;
}

string Barman::getNomBar()
{
	return nomBar;
}

/*
void Barman::parle(const string texte) const
{
}
*/

void Barman::sePresente() const
{
	cout << "(" << nom << ")" << " Bonjour, je suis " << getNom() << " le barman du " << getNomBar() <<
		" et j'aime le " << getBoissonFavorite() << terminePhrase() << endl;
}

void Barman::sert(const Humain& client) const
{
	cout << "Tiens " << client.getNom()<< " un verre de "<< client.getBoissonFavorite()<< terminePhrase()<<endl;
}
