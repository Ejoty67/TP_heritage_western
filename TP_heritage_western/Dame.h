#pragma once
#include <string>
#include "Humain.h"
using namespace std;

class Dame : public Humain
{
private:
	string couleurRobe;
	string etat;
	void hurle();
	void remercie(const Cowboy& heros);

public:
	// Constructeurs et Destructeur
	Dame(const string n = "", const string bF = "lait", const string cR = "blanche");
	// Accesseurs
	string getnom() const; // redéfinition
	string getEtat() const;
	// Services
	void sePresente() const; // redéfinition
	void changeDeRobe(const string cR);

	void seFaitKidnapper();
	void seFaitLiberer(Cowboy& cowboy);


};

