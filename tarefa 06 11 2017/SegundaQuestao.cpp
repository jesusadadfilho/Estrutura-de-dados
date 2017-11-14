#include <stdio.h>
#include <iostream>
using namespace std;

char Lista[8]={'0','1','1','0','0','0','1','0'};

int len(){
	int len = sizeof(lista) / sizeof(lista[0]);
	return len;
}


void listaZero(char lista[]){
	char vetorZero[len()];
	char vetorZero2[len()];
	char vetorMaior[len()];
	int tipo = 1;
	int count = 0;
	int count2 = 0;
	for(int i = 0; i < len(); i++ ){
		if (Lista[i] == '0' && tipo == 1){
			vetorZero[count] = Lista[i];
			count += 1;
		}
		if (Lista[i] == '0' && tipo == -1){
			vetorZero2[count] = Lista[i];
			count2 += 1;
		}
		if (Lista[i] == '1'){
			tipo = tipo * (-1);
		}
	}
}