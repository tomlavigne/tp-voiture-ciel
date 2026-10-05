// Vérifie si VOITURE_H n'est pas déjà défini
#ifndef VOITURE_H

// Définit VOITURE_H pour éviter les inclusions multiples
#define VOITURE_H

// Inclut la bibliothèque permettant d'utiliser std::string
#include <string>

// Déclaration de la classe CVoiture
class CVoiture
{
private:

    // Stocke le type de carburant de la voiture
    std::string carburant;

    // Stocke la marque de la voiture
    std::string marque;

    // Stocke le modèle de la voiture
    std::string modele;

    // Stocke la puissance de la voiture
    int puissance;

    // Stocke la vitesse actuelle de la voiture
    int vitesse;

public:

    // Constructeur permettant d'initialiser une voiture
    CVoiture(const std::string& marque,
             const std::string& modele,
             int puissance,
             const std::string& carburant);

    // Méthode permettant d'accélérer la voiture
    void accelerer(int valeur);

    // Méthode permettant d'afficher les informations de la voiture
    void affiche();

    // Méthode permettant d'arrêter la voiture
    void arreter();

    // Méthode permettant de démarrer la voiture
    void demarrer();

    // Méthode permettant de ralentir la voiture
    void ralentir(int valeur);
};

// Fin de la protection contre les inclusions multiples
#endif
