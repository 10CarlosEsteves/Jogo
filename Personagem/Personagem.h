#ifndef PERSONAGEM_H
#define PERSONAGEM_H

#include <iostream>
#include <string>

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

    public:
        //Métodos Getters
        string getNome();
        int getHP();
        int getDano();
        int getMoedas();
        int getArmadura();
        int getExperiencia();

		//Métodos Setters
        void setNome(string n);
        void setHP(int vidas);
        void setDano(int d);
        void setMoedas(int m);
        void setArmadura(int a);
        void setExperiencia(int e);

        //Construtores
        Personagem();
        Personagem(string n, int v, int d, int m, int a, int e);

        //Funções pessoais
        
        //Função para salvar os dados do personagem
        //Se o arquivo foi acessado, salve o conteudo.
        //Caso contrário, informe ao usuario do erro.
        void SalvarDados();
        
        
        //Função para carregar os dados do personagem.
        //Se o arquivo conseguio abrir, recupere as informações.
        //Caso contrário, informe ao usuário do erro.
        void CarregarDados();
        
        //Função para printar informações gerais, útil para Debbuging
        void PrintDados();

};



#endif
