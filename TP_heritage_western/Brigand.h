#pragma once
#include <string>
#include "Humain.h"
#include "Dame.h"
#include "Humain.h"
#include "Cowboy.h"
using namespace std;

class Brigand :public Humain {
private:
	string comportement;
	int nbDamesEnlevees = 0;
	int recompense = 0;
	bool enPrison = false;

public:
	Brigand(const string n = "", const string bF = "tord-boyaux", const string co = "méchant");
	string getComportement() const;
	int getNbDamesEnlevees() const;
	int getRecompense() const;
	void sePresente() const;
	void kidnappe(Dame& dame);
	void seFaitEmprisonne(Cowboy& cowboy);
	void augmenteRecompense(const int prix = 100);
	void diminueRecompense(const int prix = 100);
	bool estEnPrison() const;

};
