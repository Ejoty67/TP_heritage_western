#pragma once

#include <string>
using namespace std;

class Humain
{
private:
	string nom;
	string boissonFavorite;

public:
	Humain(const string n, const string bF = "eau");
	string getBoissonFavorite() const;
	void setBoissonFavorite(const string NouvelleBoissonFavorite);
	void parle(const string text);
	void sePresenter();
	void boire();
	string getNom() const;
};
