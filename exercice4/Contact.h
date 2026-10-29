

#ifndef EXERCICE4_CONTACT_H_
#define EXERCICE4_CONTACT_H_
#include<iostream>
class Contact {
private:
	std::string nom;
	std::string tel;
	std::string email;
public:
	Contact(std::string nom,std::string tel,std::string email);
	void afficher()const;
	const std::string& getNom()       const { return nom; }
	const std::string& getTelephone() const { return tel; }
	const std::string& getEmail()     const { return email; }


	virtual ~Contact();
};

#endif /* EXERCICE4_CONTACT_H_ */
