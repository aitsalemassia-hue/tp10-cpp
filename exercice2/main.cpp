#include"Personne.h"
#include<iostream>
int main() {

    std::string nomSaisi;
    int ageSaisi;


    std::cout << "Entrez le nom : ";

    std::getline(std::cin, nomSaisi);

    std::cout << "Entrez l'age : ";
    std::cin >> ageSaisi;


    Personne* ptrPersonne = new Personne(nomSaisi, ageSaisi);

    std::cout << " Affichage via le pointeur" << std::endl;


    ptrPersonne->afficher();

    std::cout << "Liberation de la memoire" << std::endl;
    delete ptrPersonne;

    ptrPersonne = nullptr;

    return 0;
}
