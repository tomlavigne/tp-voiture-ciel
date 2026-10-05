// Inclut le fichier d'en-tête contenant la définition de la classe CVoiture
#include "voiture.h"

// Inclut la bibliothèque permettant d'utiliser cout et endl
#include <iostream>

// Permet d'utiliser directement les éléments de l'espace de noms std
using namespace std;

// Constructeur de la classe CVoiture
CVoiture::CVoiture(const string& marque,
                   const string& modele,
                   int puissance,
                   const string& carburant)
{
    // Initialise la marque de la voiture
    this->marque = marque;

    // Initialise le modèle de la voiture
    this->modele = modele;

    // Initialise la puissance de la voiture
    this->puissance = puissance;

    // Initialise le type de carburant
    this->carburant = carburant;

    // Initialise la vitesse de la voiture à 0 km/h
    this->vitesse = 0;
}

// Méthode permettant d'accélérer la voiture
void CVoiture::accelerer(int valeur)
{
    // Vérifie que la valeur d'accélération est positive
    if (valeur > 0)
    {
        // Augmente la vitesse de la voiture
        vitesse += valeur;
    }

    // Affiche la valeur de l'accélération
    cout << "La voiture accelere de "
         << valeur
         << " km/h." << endl;
}

// Méthode permettant d'afficher les informations de la voiture
void CVoiture::affiche()
{
    // Affiche une ligne de séparation
    cout << "-----------------------------" << endl;

    // Affiche le titre des informations
    cout << "Informations de la voiture" << endl;

    // Affiche la marque de la voiture
    cout << "Marque     : " << marque << endl;

    // Affiche le modèle de la voiture
    cout << "Modele     : " << modele << endl;

    // Affiche la puissance de la voiture
    cout << "Puissance  : " << puissance << " ch" << endl;

    // Affiche le carburant utilisé
    cout << "Carburant  : " << carburant << endl;

    // Affiche la vitesse actuelle
    cout << "Vitesse    : " << vitesse << " km/h" << endl;

    // Affiche une ligne de séparation
    cout << "-----------------------------" << endl;
}

// Méthode permettant d'arrêter la voiture
void CVoiture::arreter()
{
    // Met la vitesse de la voiture à 0 km/h
    vitesse = 0;

    // Affiche un message indiquant que la voiture est arrêtée
    cout << "La voiture est arretee." << endl;
}

// Méthode permettant de démarrer la voiture
void CVoiture::demarrer()
{
    // Affiche un message indiquant que la voiture démarre
    cout << "La voiture demarre." << endl;
}

// Méthode permettant de ralentir la voiture
void CVoiture::ralentir(int valeur)
{
    // Vérifie que la valeur de ralentissement est positive
    if (valeur > 0)
    {
        // Diminue la vitesse de la voiture
        vitesse -= valeur;

        // Vérifie que la vitesse ne devient pas négative
        if (vitesse < 0)
        {
            // Si la vitesse est négative, elle est remise à 0
            vitesse = 0;
        }
    }

    // Affiche la valeur du ralentissement
    cout << "La voiture ralentit de "
         << valeur
         << " km/h." << endl;
}
