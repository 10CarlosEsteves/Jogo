#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <fstream>
#include <conio.h>
#include <string>

#include "Mapa.h"

class Mapa;

using namespace std;

class Personagem{

    private:
    	//Dados do personagem
        string nome;
        int HP;
        int dano;
        int moedas;
        int armadura;
        int experiencia;
        int posicaox;
        int posicaoy;

    public:
        //Métodos Getters
        string getNome() const;
        int getHP() const;
        int getDano() const;
        int getMoedas() const;
        int getArmadura() const;
        int getExperiencia() const;
        int getPosicaoX() const;
        int getPosicaoY() const;

		//Métodos Setters
        void setNome(string n);
        void setHP(int vidas);
        void setDano(int d);
        void setMoedas(int m);
        void setArmadura(int a);
        void setExperiencia(int e);
        void setPosicaoX(int x);
        void setPosicaoY(int y);

        //Construtores
        Personagem();
        Personagem(string n, int v, int d, int m, int a, int e, int x, int y);

        //Funções pessoais
        
        //Função para salvar os dados do personagem
        //Se o arquivo foi acessado, salve o conteudo.
        //Caso contrário, informe ao usuario do erro.
        void SalvarDados(string slot) const;
        
        //Função para carregar os dados do personagem.
        //Se o arquivo conseguio abrir, recupere as informações.
        //Caso contrário, informe ao usuário do erro.
        void CarregarDados(string slot);
        
        //Função para printar informações gerais, útil para Debbuging.
        void PrintDados() const;

		//Função Para movimentar o personagem pelo mapa.
        void Movimento(Mapa& mapa);

};



#endif
