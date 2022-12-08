#include <iostream>
#include "Personagem.h"
using namespace std;

//Métodos Getters(Acessores) da classe Personagem
string Personagem::getNome() const{ 
    return nome; 
}

int Personagem::getHP() const{ 
    return HP; 
}

int Personagem::getDano() const{
    return dano;
}

int Personagem::getMoedas() const{
    return moedas;
}

int Personagem::getArmadura() const{
    return armadura;
}

int Personagem::getExperiencia() const{
    return experiencia;
}

int Personagem::getPosicaoX() const{
    return posicaox;
}

int Personagem::getPosicaoY() const{
    return posicaoy;
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

void Personagem::setPosicaoX(int x){
    posicaox = x;
}

void Personagem::setPosicaoY(int y){
    posicaoy = y;
}

//Contrutores da classe Personagem
Personagem::Personagem(){
    nome= "NAO ESTABELECIDO";
    HP=0;
    dano=0;
    moedas=0;
    armadura=0;
    experiencia=0;
    posicaox = 0;
    posicaoy = 0;
}

Personagem::Personagem(string n, int v, int d, int m, int a, int e, int x, int y){
    nome = n;
    HP = v;
    dano = d;
    moedas = m;
    armadura = a;
    experiencia = e;
    posicaox = x;
    posicaoy = y;
}


//Métodos pessoais da classe Personagem

//Função para salvar os dados do personagem
void Personagem::SalvarDados(string slot) const{

    ofstream gravacao;

	//Abrindo o arquivo de gravacao no formato trunc;
    gravacao.open("Slots de Salvamento/"+slot+"/Personagem/Personagem.txt", ios::trunc);

	//Se o arquivo foi acessado, salve o conteudo.
    if(!gravacao.fail()){
        gravacao<<nome<<endl;
        gravacao<<HP<<endl;
        gravacao<<dano<<endl;
        gravacao<<moedas<<endl;
        gravacao<<armadura<<endl;
        gravacao<<experiencia<<endl;
        gravacao<<posicaox<<endl;
        gravacao<<posicaoy<<endl;
    }

	//Caso contrário, informe ao usuario do erro.
    else{
        cout<<"FALHA AO SALVAR, O SLOT ESTA CORROMPIDO OU NAO EXISTE"<<endl;
    }

    //Fechando o arquivo para evitar corrupção.
    gravacao.close();
    
}

//Função para carregar os dados do personagem.
void Personagem::CarregarDados(string slot){

    ifstream leitura;
	
    leitura.open("Slots de Salvamento/"+slot+"/Personagem/Personagem.txt");
    
    //Se o arquivo conseguio abrir, recupere as informações.
    if(!leitura.fail()){
    	getline(leitura, nome);
        leitura>>HP;
        leitura>>dano;
        leitura>>moedas;
        leitura>>armadura;
        leitura>>experiencia;
        leitura>>posicaox;
        leitura>>posicaoy;
    }

    //Caso contrário, informe ao usuário do erro.
    else{
        cout<<"FALHA AO CARREGAR, O SLOT ESTA CORROMPIDO OU NAO EXISTE"<<endl;
    }


    leitura.close();


}

//Função para printar informações gerais, útil para Debbuging
void Personagem::PrintDados() const{
    cout<<"=========================="<<endl;
    cout<<"INFORMACOES DO PERSONAGEM:"<<endl;
    cout<<"=========================="<<endl;
	cout<<"NOME: "<<getNome()<<endl;
	cout<<"VIDA: "<<getHP()<<endl;
	cout<<"DANO: "<<getDano()<<endl;
	cout<<"MOEDAS: "<<getMoedas()<<endl;
	cout<<"ARMADURA: "<<getArmadura()<<endl;
	cout<<"XP: "<<getExperiencia()<<endl;
	cout<<"X: "<<getPosicaoX()<<" Y: "<<getPosicaoY()<<endl;
    cout<<"=========================="<<endl;
}

void Personagem::Movimento(Mapa& mapa){

    switch( getch() ){

        case 'W':
        case 'w':
            switch (mapa.espaco(posicaox-1, posicaoy)){
                case '*':
                    posicaox = posicaox; 
                break;

                default:
                    posicaox -=1;
                break;
            }
            
        break;

        case 'S':
        case 's':
            switch (mapa.espaco(posicaox+1, posicaoy)){
                case '*':
                    posicaox = posicaox; 
                break;

                default:
                    posicaox +=1;
                break;
            }
        break;

        case 'A':
        case 'a':
            switch(mapa.espaco(posicaox, posicaoy-1)){
                case '*':
                    posicaoy = posicaoy;
                break;

                default:
                    posicaoy-=1;
                break;
            }
        break;

        case 'D':
        case 'd':
            switch(mapa.espaco(posicaox, posicaoy+1)){
                case '*':
                    posicaoy = posicaoy;
                break;

                default:
                    posicaoy+=1;
                break;
            }
        break;
    

        default:
        break;
    }
}

