#include "main.h"

#include <stdio.h>


int main(int argc, char* argv[]){

	Personne utilisateur;

	printf("Quel est votre nom ? ");
	scanf("%s", utilisateur.nom);
	printf("Votre prenom ? ");
	scanf("%s", utilisateur.prenom);

	printf("Vous vous appelez %s %s\n", utilisateur.prenom, utilisateur.nom);

    return 0;
}
