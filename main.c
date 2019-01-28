#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char* argv[]){
	 char lettre=0;
	 char motSecret[]="MARRON";
	 int lettreTrouvee[6]={0};
	 int coupsRestants=0;
	 printf("Bienvenue dans le Pendu!\n\n");
	 while (coupsRestants>0 && !gagne(lettreTrouvee)){
		 printf("\n\nIl vous reste %d coups à jouer", coupsRestants);
		 printf("\nQuel est le mot secret ? ");

		 for(int i=0; i<6; i++){
			 if(lettreTrouvee[i]){
				 printf("%c", motSecret);
			 }else{
				 printf("*");
			 }
		 }
	 }

     return 0;
}

