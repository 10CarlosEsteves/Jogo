#include <iostream>

#include "Mapa.h"

using namespace std;

char Mapa::espaco(int x, int y){
    return mapa[x][y];
}

void Mapa::Plot(Personagem& p){

    for(int l=0; l<5; l++){

        for(int c=0; c<5; c++){

            if(l==p.getPosicaoX() && c==p.getPosicaoY()){
                cout<<"&"<<" ";
                
            }

            else{
                cout<<mapa[l][c]<<" ";
            }
            
        }
        cout<<endl;

    }
    
    cout<<"X: "<<p.getPosicaoX()<<" Y: "<<p.getPosicaoY()<<endl;

}



