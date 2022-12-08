#ifndef MAPA_H
#define MAPA_H

#include <iostream>
#include "Personagem.h"

class Personagem;

using namespace std;

class Mapa{

    private:
        char mapa[5][5] = { {'*','*','*','*','*'},
                            {'*',' ',' ',' ','*'},
                            {'*',' ',' ',' ','*'},
                            {'*',' ',' ',' ','*'},
                            {'*','*','*','*','*'}};

    public:
        char espaco(int x, int y);
        void Plot(Personagem& p);
};


#endif
