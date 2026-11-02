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
		string getBoissonFavorite();
		void setBoissonFavorite(const string NouvelleBoissonFavorite);
		void parle(const string text);
		void sePresenter();
		void boire();
		string getNom();
};





class Dame : public Humain
{
	private:
		string couleurRobe;
		string etat;
		string nom;
		string boissonFavorite;

	public:
	// Constructeurs et Destructeur
	Dame(const string n = "", const string bF = "lait", const string cR = "blanche");
	// Accesseurs
	string getnom() const; // redéfinition
	string getEtat() const;
	// Services
	void sePresente() const; // redéfinition
	void changeDeRobe(const string cR);


};



class Cowboy:public Humain {
	private:
		string nom;
		string boissonFavorite;
		int populariter = 0;
		string adjectif = "vaillant";

	public:
		Cowboy(const string n = "", const string bF = "whisky");
		void sePresente();
		int getpopularite();
		void setpopularite(int nb);
};