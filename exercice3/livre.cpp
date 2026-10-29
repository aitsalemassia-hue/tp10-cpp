

#include "livre.h"


livre::livre() : titre(""), prix(0.0) {
}


livre::livre(const std::string& titre,float prix):titre(titre),prix(prix) {

}
void livre::afficher(){
	std::cout <<" Titre : "<<titre<<std::endl;
	std::cout << " Prix : " <<prix<<std::endl;


}


void livre::saisir(){
	std::cout << "  Titre du livre :\n ";
	std::cin >>titre;

	std::cout << " \n Prix du livre  :\n ";
	std::cin >> prix;

}
livre::~livre() {
	// TODO Auto-generated destructor stub
}

