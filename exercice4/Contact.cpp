

#include "Contact.h"

Contact::Contact(std::string n,std::string t,std::string e):nom(n),tel(t),email(e) {

}
void Contact::afficher() const {
    // Tout sur une seule ligne séparée par des |
    std::cout << nom << " | " << tel << " | " << email << std::endl;
}





Contact::~Contact() {
	// TODO Auto-generated destructor stub
}

