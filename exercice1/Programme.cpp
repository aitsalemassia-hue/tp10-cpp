#include<iostream>

#include<string>

int main(){


	int taille=0;
	std::cout<<"entrez la taille du tableau: "<<std::endl;
	std::cin>>taille;



	if(taille<=0){
		std::cout<<"Erreur : la taille doit etre superieure a 0 ." << std::endl;
		return 1;
	}



	int* tableau = new int[taille];


	std::cout<<"saisissez les " << taille << "les valeurs : "<< std::endl;
	for(int i=0;i<taille;i++){
		std::cout<<"valeur ["<<i<<"]"<<std::endl;
		std::cin>>tableau[i];
	}


	std::cout << " les valeurs saisies : ";
	    for (int i = 0; i < taille; ++i) {
	        std::cout << tableau[i] << std::endl;
	    }

	delete[] tableau;

	tableau=nullptr;
	return 0;


}


