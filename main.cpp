#include <iostream>
#include "voiture.h"

using namespace std;

int main()
{
    CVoiture voiture("Peugeot", "208", 100, "Essence");

    cout << "===== ETAT INITIAL =====" << endl;
    voiture.affiche();

    cout << endl;
    cout << "===== DEMARRAGE =====" << endl;
    voiture.demarrer();

    cout << endl;
    cout << "===== ACCELERATION =====" << endl;
    voiture.accelerer(50);

    voiture.affiche();

    cout << endl;
    cout << "===== RALENTISSEMENT =====" << endl;
    voiture.ralentir(20);

    voiture.affiche();

    cout << endl;
    cout << "===== ARRET =====" << endl;
    voiture.arreter();

    cout << endl;
    cout << "===== ETAT FINAL =====" << endl;
    voiture.affiche();

    return 0;
}
