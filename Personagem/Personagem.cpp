#include <iostream>
#include <fstream>
#include "Personagem.h"

using namespace std;

//Métodos Getters(Acessores) da classe Personagem
string Personagem::getNome(){ 
    return nome; 
}

int Personagem::getHP(){ 
    return HP; 
}

int Personagem::getDano(){
    return dano;
}

int Personagem::getMoedas(){
    return moedas;
}

int Personagem::getArmadura(){
    return armadura;
}

int Personagem::getExperiencia(){
    return experiencia;
}


//Métodos Setters(Mutadores) da classe Personagem
void Personagem::setNome(string n){
    nome = n;
}

void Personagem::setHP(int vidas){
    HP=vidas;
}

void Personagem::setDano(int d){
    dano = d;
}

void Personagem::setMoedas(int m){
    moedas = m;
}

void Personagem::setArmadura(int a ){
    armadura = a;
}

void Personagem::setExperiencia(int e){
    experiencia = e;
}

//Contrutores da classe Personagem
Personagem::Personagem(){
    nome= "NAO ESTABELECIDO";
    HP=0;
    dano=0;
    moedas=0;
    armadura=0;
    experiencia=0;
}

Personagem::Personagem(string n, int v, int d, int m, int a, int e){
    nome = n;
    HP = v;
    dano = d;
    moedas = m;
    armadura = a;
    experiencia = e;
}


//Métodos pessoais da classe Personagem

//Função para salvar os dados do personagem
void Personagem::SalvarDados(){

    ofstream gravacao;
	
	//Abrindo o arquivo de gravacao no formato trunc;
    gravacao.open("Slots de Salvamento/Personagem.txt", ios::trunc);

	//Se o arquivo foi acessado, salve o conteudo.
    if(!gravacao.fail()){
        gravacao<<nome<<endl;
        gravacao<<HP<<endl;
        gravacao<<dano<<endl;
        gravacao<<moedas<<endl;
        gravacao<<armadura<<endl;
        gravacao<<experiencia<<endl;
    }

	//Caso contrário, informe ao usuario do erro.
    else{
        cout<<"FALHA AO SALVAR, O SLOT ESTA CORROMPIDO OU NAO EXISTE"<<endl;
    }

    //Fechando o arquivo para evitar corrupção.
    gravacao.close();
    
}

//Função para carregar os dados do personagem.
void Personagem::CarregarDados(){

    ifstream leitura;
	
    leitura.open("Slots de Salvamento/Personagem.txt");
    
    //Se o arquivo conseguio abrir, recupere as informações.
    if(!leitura.fail()){
    	leitura>>nome;
        leitura>>HP;
        leitura>>dano;
        leitura>>moedas;
        leitura>>armadura;
        leitura>>experiencia;
    }

    //Caso contrário, informe ao usuário do erro.
    else{
        cout<<"FALHA AO CARREGAR, O SLOT ESTA CORROMPIDO OU NAO EXISTE"<<endl;
    }


    leitura.close();


}

//Função para printar informações gerais, útil para Debbuging
void Personagem::PrintDados(){
    cout<<"=========================="<<endl;
    cout<<"INFORMACOES DO PERSONAGEM:"<<endl;
    cout<<"=========================="<<endl;
	cout<<"NOME: "<<getNome()<<endl;
	cout<<"VIDA: "<<getHP()<<endl;
	cout<<"DANO: "<<getDano()<<endl;
	cout<<"MOEDAS: "<<getMoedas()<<endl;
	cout<<"ARMADURA: "<<getArmadura()<<endl;
	cout<<"XP: "<<getExperiencia()<<endl;
    cout<<"=========================="<<endl;
}
