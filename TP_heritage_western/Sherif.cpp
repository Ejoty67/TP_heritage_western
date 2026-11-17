#include "Sherif.h"
#include <string>
#include <iostream>

using namespace std;


Sherif::Sherif(const string n, const string bF):Cowboy(n,bF)
{
}


void Sherif::sePresente()
{
	cout << "Bonjour, je suis Shérif "<<getNom()<<" et j'aime "<<getBoissonFavorite()<<endl;
}


void Sherif::annonce(Brigand& brigand)
{
	cout << "** OYEZ OYEZ BRAVE GENS ! !" << brigand.getRecompense() <<
		" a qui arretera " << brigand.getNom() << " mort ou vif ! !";
}
