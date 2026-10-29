/*
 * Personne.cpp
 *
 *  Created on: 29 oct. 2026
 *      Author: Admin
 */

#include "Personne.h"

Personne::Personne(const std::string& nom, int age) : nom(nom), age(age) {
    std::cout << "[Constructeur] Creation de : " << nom << std::endl;
}




void Personne::afficher(){
	std::cout<<"affichage des informations :"<<std::endl;
	std::cout <<"Nom :"<<nom<<std::endl;
	std::cout <<"Age :"<<age<<std::endl;

}
Personne::~Personne() {
	std::cout << "[Destructeur] Destruction de : " << nom << std::endl;
}

