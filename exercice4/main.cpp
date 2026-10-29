#include "Contact.h"
#include <iostream>

void supprimerContact(Contact**& carnet,int& taille ,std::string nom){
	int indice=-1;
	for(int i=0;i<taille;i++){
		if(carnet[i]->getNom()==nom){
			indice=i;
			break;
		}
	}



	    if (indice == -1) {
	        std::cout << "Contact '" << nom << "' introuvable." << std::endl;
	        return;
	    }


	    delete carnet[indice];


	    for (int i = indice; i < taille - 1; i++) {
	        carnet[i] = carnet[i + 1];
	    }


	    taille--;

	    std::cout << "Contact '" << nom << "' supprime." << std::endl;
}
int main(){

	int taille=4;

	// 1. Créer le tableau dynamique de pointeurs
	Contact** carnet = new Contact*[4];

	carnet[0] = new Contact("Assiya",   "0612345678", "assiya@mail.com");
	carnet[1] = new Contact("Said",     "0698765432", "said@mail.com");
	carnet[2] = new Contact("Khawla", "0611223344", "khawla@mail.com");
	carnet[3] = new Contact("Fatima",   "0655667788", "fati@mail.com");

	    std::cout << " Carnet initial " << std::endl;
	    for (int i = 0; i < taille; i++) {
	        carnet[i]->afficher();
	    }

	    std::cout << "\nSuppression de Said " << std::endl;
	    supprimerContact(carnet, taille, "Said");


	    std::cout << "\n Carnet apres suppression " << std::endl;
	    for (int i = 0; i < taille; i++) {
	        carnet[i]->afficher();
	    }

	    // 6. Libérer la mémoire : d'abord les objets, puis le tableau
	    for (int i = 0; i < taille; i++) {
	        delete carnet[i];
	    }
	    delete[] carnet;

	    return 0;


}




