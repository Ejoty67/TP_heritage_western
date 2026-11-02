// TP_heritage_western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"
using namespace std;

int main()
{
    Cowboy lucky("Lucky Luke");
    
    Dame jenny("Jenny");


    lucky.sePresente();
    jenny.sePresente();

    jenny.changeDeRobe("verte");
    lucky.boire();
    jenny.boire();

    return 0;
}


