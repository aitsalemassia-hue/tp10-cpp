

#ifndef EXERCICE2_PERSONNE_H_
#define EXERCICE2_PERSONNE_H_
#include<iostream>
class Personne {
private:
	std::string nom;
	int age;
public:
	Personne(const std::string& nom ,int age);
	virtual ~Personne();
	void afficher();

};

#endif /* EXERCICE2_PERSONNE_H_ */
