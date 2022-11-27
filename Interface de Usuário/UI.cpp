#include <iostream>
#include "UI.h"

using namespace std;

char Interface::Main_Menu(){

    while( comando != '4' ){

		cout<<"============================="<<endl;
		cout<<"            MENU             "<<endl;
		cout<<"============================="<<endl;
		cout<<"[1]     INICIAR CAMPANHA     "<<endl;
		cout<<"[2]     CONTINUAR CAMPANHA   "<<endl;
		cout<<"[3]         AJUDA            "<<endl;
		cout<<"[4]         SAIR             "<<endl;
		cout<<"============================="<<endl;
		
		comando = getch();
        return comando;
	}
}


Interface::Interface(){
    personagem = Personagem();   
    comando = ' ';
}

Interface::Interface(char com, Personagem& p){
    personagem = p;
    comando = com;

}
