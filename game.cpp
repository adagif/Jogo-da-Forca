#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <iostream>

using namespace std;

void limpaTela(){
	system("clear");
}

void menu(){
	int opcao = 0;

	while(opcao!=3){
		limpaTela();
		cout<< "\nBem vindo ao jogo";
		cout<< "\n1 - Jogar";
		cout<< "\n2 - Sobre";
		cout<< "\n3 - Sair";
		cout<< "\nEscolha uma opcao: ";
		cin >> opcao;

		switch(opcao){
			case 1:
				cout<< "Jogo iniciado";
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