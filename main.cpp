// Inclut la bibliothèque permettant d'utiliser cout et endl
#include <iostream>

// Inclut la définition de la classe CVoiture
#include "voiture.h"

// Permet d'utiliser directement les éléments de l'espace de noms std
using namespace std;

// Fonction principale du programme
int main()
{
    // Crée une voiture Peugeot 208 avec une vitesse maximale de 100 km/h et un moteur essence
    CVoiture voiture("Peugeot", "208", 100, "Essence");

    // Affiche le titre de l'état initial
    cout << "===== ETAT INITIAL =====" << endl;

    // Affiche l'état actuel de la voiture
    voiture.affiche();

    // Passe à la ligne pour améliorer la lisibilité
    cout << endl;

    // Affiche le titre de la partie démarrage
    cout << "===== DEMARRAGE =====" << endl;

    // Démarre la voiture
    voiture.demarrer();

    // Passe à la ligne
    cout << endl;

    // Affiche le titre de la partie accélération
    cout << "===== ACCELERATION =====" << endl;

    // Accélère la voiture de 50 km/h
    voiture.accelerer(50);

    // Affiche l'état de la voiture après l'accélération
    voiture.affiche();

    // Passe à la ligne
    cout << endl;

    // Affiche le titre de la partie ralentissement
    cout << "===== RALENTISSEMENT =====" << endl;

    // Ralentit la voiture de 20 km/h
    voiture.ralentir(20);

    // Affiche l'état de la voiture après le ralentissement
    voiture.affiche();

    // Passe à la ligne
    cout << endl;

    // Affiche le titre de la partie arrêt
    cout << "===== ARRET =====" << endl;

    // Arrête la voiture
    voiture.arreter();

    // Passe à la ligne
    cout << endl;

    // Affiche le titre de l'état final
    cout << "===== ETAT FINAL =====" << endl;

    // Affiche l'état final de la voiture
    voiture.affiche();

    // Indique que le programme s'est terminé correctement
    return 0;
}
