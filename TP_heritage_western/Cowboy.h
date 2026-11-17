#pragma once
#include <string>
#include "Humain.h"
#include "Arme.h"
using namespace std;

class Cowboy :public Humain {
private:
	int populariter = 0;
	string adjectif = "vaillant";
	Arme* arme;


public:
	Cowboy(const string n = "", const string bF = "whisky");
	void sePresente();
	int getpopularite();
	void setpopularite(int nb);
	string getQualite();
	void setQualite(const string qualite);
	void incrementePopularite();
	void decrementePopularite();
	void tire(const Brigand& brigand);
	void emprisonne(Brigand& brigand);
	void libere(Dame& dame);
	void tirer(const Brigand& brigand) const;
	setArme(Arme* arme);
	~Cowboy();

};

