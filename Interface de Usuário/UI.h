#ifndef USER_INTERFACE_H
#define USER_INTERFACE_H

#include <conio.h>
#include <iostream>
#include <stdlib.h>

#include "Personagem.h"

using namespace std;

class Interface{
    private:
        Personagem personagem;
        char comando;

    public:
        char Main_Menu();

        Interface();
        Interface(char com, Personagem& p);




};
