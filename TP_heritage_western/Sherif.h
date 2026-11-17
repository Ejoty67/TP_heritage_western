#pragma once
#include "Cowboy.h"
#include "Brigand.h"
#include <string>
using namespace std;

class Sherif : public Cowboy
{
public:
	void sePresente();
	Sherif(const string n = "", const string bF = "eau");
	void annonce(Brigand& brigand);



};

