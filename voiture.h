#ifndef VOITURE_H
#define VOITURE_H

#include <string>

class CVoiture
{
private:

    std::string carburant;
    std::string marque;
    std::string modele;
    int puissance;
    int vitesse;

public:

    CVoiture(const std::string& marque,
             const std::string& modele,
             int puissance,
             const std::string& carburant);

    void accelerer(int valeur);

    void affiche();

    void arreter();

    void demarrer();

    void ralentir(int valeur);
};

#endif
