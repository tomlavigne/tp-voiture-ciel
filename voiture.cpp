#include "voiture.h"
#include <iostream>

using namespace std;

CVoiture::CVoiture(const string& marque,
                   const string& modele,
                   int puissance,
                   const string& carburant)
{
    this->marque = marque;
    this->modele = modele;
    this->puissance = puissance;
    this->carburant = carburant;
    this->vitesse = 0;
}

void CVoiture::accelerer(int valeur)
{
    if (valeur > 0)
    {
        vitesse += valeur;
    }

    cout << "La voiture accelere de "
         << valeur
         << " km/h." << endl;
}

void CVoiture::affiche()
{
    cout << "-----------------------------" << endl;
    cout << "Informations de la voiture" << endl;
    cout << "Marque     : " << marque << endl;
    cout << "Modele     : " << modele << endl;
    cout << "Puissance  : " << puissance << " ch" << endl;
    cout << "Carburant  : " << carburant << endl;
    cout << "Vitesse    : " << vitesse << " km/h" << endl;
    cout << "-----------------------------" << endl;
}

void CVoiture::arreter()
{
    vitesse = 0;

    cout << "La voiture est arretee." << endl;
}

void CVoiture::demarrer()
{
    cout << "La voiture demarre." << endl;
}

void CVoiture::ralentir(int valeur)
{
    if (valeur > 0)
    {
        vitesse -= valeur;

        if (vitesse < 0)
        {
            vitesse = 0;
        }
    }

    cout << "La voiture ralentit de "
         << valeur
         << " km/h." << endl;
}
