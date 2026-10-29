

#ifndef EXERCICE3_LIVRE_H_
#define EXERCICE3_LIVRE_H_
#include<iostream>
class livre {
private :
	std::string titre;
	float prix;
public:
	livre();
	livre(const std::string& titre,float prix);
	void afficher();
	void saisir();
	virtual ~livre();
};

#endif /* EXERCICE3_LIVRE_H_ */
