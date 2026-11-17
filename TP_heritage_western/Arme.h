#pragma once
#include <string>
using namespace std;

class Arme
{
	private:
		string nom;
		int capacite;
		int nbBalles;
		int prix;

	public:
		Arme(const string nom="", int prix = 100, int capacite, int nbBalles = 0);
		string getNom();
		int getPrix();
		int getNbBalles();
		void tire();
		void recharge(int nb);

};

