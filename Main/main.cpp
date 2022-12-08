#include <conio.h>
#include <iostream>
#include <stdlib.h>

#include "UI.h"
#include "Mapa.h"
#include "Personagem.h"

 
using namespace std;
using namespace Interface;

int main(){
	
	Personagem heroi("Courrier", 200, 75, 1000, 200, 100, 2,2);
	Mapa nivel1;

	while(1){
		heroi.Movimento(nivel1);
		system("cls");
		nivel1.Plot(heroi);
	}

	
	return 0;
}
