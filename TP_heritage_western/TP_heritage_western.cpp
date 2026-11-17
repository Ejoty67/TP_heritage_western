// TP_heritage_western.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Humain.h"
#include "Dame.h"
#include "Humain.h"
#include "Brigand.h"
#include "Cowboy.h"
#include "Barman.h"
#include "Sherif.h"
#include "Arme.h"
#include <string>
using namespace std;

int main()
{

    Cowboy lucky("Lucky Luke");
    Dame jenny("Jenny");
    Brigand joe("Joe");
    Barman robert("Robert", "bière","Saloon 67");
    Sherif clint("Clint", "eau");

    /*
    cout << "premiere histoire :\n\n";
    lucky.sePresente();
    jenny.sePresente();
    joe.sePresente();
    robert.sePresente();
    robert.sert(lucky);
    robert.sert(jenny);
    robert.sert(joe);

    cout << " fin de la premiere histoire\n";



    cout << "deuxieme histoire :\n\n";
    lucky.sePresente();
    jenny.sePresente();
    joe.sePresente();
    robert.sePresente();
    clint.sePresente();
    clint.annonce(joe);
    joe.seFaitEmprisonne(clint);

    cout << " fin de la deuxieme histoire\n";
    */



    lucky.sePresente();
    joe.sePresente();
    //bagarre





    return 0;
}




/*
Methode de la flemme :

cout << "Bonjour, je suis le vaillant Lucky Luke et j'aime le coca-cola\n";
cout << "Bonjour, je suis Miss Jenny et j'ai une jolie robe blanche\n";
cout << "Bonjour, je suis Joe le méchant et j'aime le tord-boyaux.\n";
cout << "Miss Jenny hurle\n";
cout << "Au secours, je me fais kidnapper !\n";
cout << "Ah ah ! Miss Jenny, tu es mienne désormais !\n";
cout << "Bonjour, je suis le vaillant Lucky Luke et j'aime le coca-cola\n";
cout << "Bonjour, je suis Joe le méchant et j'aime le tord-boyaux.\n";
cout << "J'ai l'air méchant et j'ai déjà kidnappé 1 dames  !\n";
cout << "Ma tête est mise à prix 100 $ !\n";
cout << "Le vaillant Lucky Luke tire sur Joe\n";
cout << "Prends ça, rascal !\n";
cout << "Damned, je suis fait ! Lucky Luke, tu m'as eu !\n";
cout << "Le vaillant Lucky Luke libère Miss Jenny\n";
cout << "Merci Lucky Luke, je suis enfin libre !\n";



*/


/*
flemme 2.1:
cout << (Lucky Luke) -- Bonjour, je suis le vaillant Lucky Luke et j'aime le coca-cola\n";
cout << (Jenny) -- Bonjour, je suis Miss Jenny et j'ai une jolie robe blanche\n";
cout << (Joe) -- Bonjour, je suis Joe le méchant et j'aime le tord-boyaux\n";
cout << (Robert) -- Bonjour, je suis Robert le barman du Saloon Robert et j'aime le bière mon gars\n";
cout << (Robert) -- Tiens Lucky Luke, un verre de coca-cola mon gars\n";
cout << (Robert) -- Tiens Jenny, un verre de lait mon gars.\n";
cout << (Robert) -- Tiens Joe, un verre de tord-boyaux mon gars.\n";


*/

/*
flemme 2.2

cout << "Lucky Luke) -- Bonjour, je suis le vaillant Lucky Luke et j'aime le coca-cola\n";
cout << "(Jenny) -- Bonjour, je suis Miss Jenny et j'ai une jolie robe blanche\n";
cout << "(Joe) -- Bonjour, je suis Joe le mechant et j'aime le tord-boyaux.\n";
cout << "(Robert) -- Bonjour, je suis Robert le barman du Saloon Robert et j'aime le bite mon gars.\n";
cout << "(Clint) -- Bonjour, je suis Sherif Clint et j'aime le eau.\n";
cout <<" ** OYEZ OYEZ BRAVE GENS ! ! 100$ a qui arretera Joe mort ou vif ! !\n";
cout << "(Joe) -- Damned, je suis fait ! Clint, to m'as eu !\n";

*/