



#include<iostream>
#include<string>
#include"livre.h"


int main() {
    int nombreLivres = 0;


    std::cout << "Combien de livres voulez-vous creer ? ";
    std::cin >> nombreLivres;



    if (nombreLivres <= 0) {
        std::cout << "Nombre invalide." << std::endl;
        return 1;
    }


    livre* bibliotheque = new livre[nombreLivres];

    std::cout << " Saisie des livres" << std::endl;
    for (int i = 0; i < nombreLivres; ++i) {
        std::cout << "Livre " << (i + 1) << " :" << std::endl;
        bibliotheque[i].saisir();
    }


    std::cout << " Bibliotheque " << std::endl;
    for (int i = 0; i < nombreLivres; ++i) {
        bibliotheque[i].afficher();
    }


    delete[] bibliotheque;
    bibliotheque = nullptr;

    return 0;
}

