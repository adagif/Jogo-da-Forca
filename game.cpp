#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>
#include <time.h>

using namespace std;

void limpaTela(){
	system("clear");
}

string PalavraAleatoria(){
	int x;
	srand((unsigned)time(NULL));

	x = rand()%3;
	string valores[3] = { "chocolate", "batata", "docinho" };

	//cout << valores[x];

	return valores[x];

}

int tamanho(string palavra){
	int x;

	x = palavra.size();
	return x;
}

string palavraOculta(int tam){
	int i;
	string p;

	for(i=0;i<tam;i++){
		p += "_ ";
	}
	return p;
}

void jogoIndividual(){
	string p,po;
	int tam;

	p = PalavraAleatoria();
	tam = tamanho(p);

	po = palavraOculta(tam);
	cout << po;
}

void imprimirStatus(){
	
}


void menu(){
	int opcao = 0;

	while(opcao!=3){
		limpaTela();
		cout<< "\n\nBem vindo ao jogo";
		cout<< "\n1 - Jogar";
		cout<< "\n2 - Sobre";
		cout<< "\n3 - Sair";
		cout<< "\nEscolha uma opcao: ";
		cin >> opcao;

		switch(opcao){
			case 1:
				cout<< "Jogo iniciado\n";
				jogoIndividual();

				limpaTela();
				break;
			case 2:
				cout<< "Informacoes do Jogo";
				limpaTela();
				break;
			case 3:
				cout<< "Ate\n";
				break;
			default: 
			cout<< "Erro";
				break;
		}
	}
}

int main(){

	menu();
	
	return 0;
}