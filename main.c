#include <stdio.h>

int renvoieTriple(int nombre);

int main(int argc, char* argv[]){
	int nombre=3;
	int resultat=renvoieTriple(nombre);
	printf("%d", resultat);
	return 0;
}

int renvoieTriple(int nombre){
	return nombre*3;
}
