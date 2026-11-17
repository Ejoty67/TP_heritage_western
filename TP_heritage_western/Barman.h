#pragma once
#include <string>
#include "Humain.h"
#include <iostream>
using namespace std;

class Barman :public Humain {
private:
	string nomBar;
	string terminePhrase() const;

public:
	Barman(const string n = "", const string bF = "bière", const string nB = "");
	string getNomBar();
	//void parle(const string texte) const;
	void sePresente() const;
	void sert(const Humain& client) const;
};
