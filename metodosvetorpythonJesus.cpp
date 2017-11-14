#include <stdio.h>
#include <iostream>
using namespace std;

int vetor[30];
int ultimo=0;

void append(int e){
	vetor[ultimo]=e;
	ultimo++;
}

int pop(int index){
	int valor = vetor[index];
	vetor[index] = 0;
	return valor;
}

void remove(int valor){
	vetor[valor] = 0;
	ultimo -=1;
	
}

void percorre(){
	for(int i=0;i<ultimo;i++){
		cout<<vetor[i]<<endl;	
	}
	
}

void inserir(int p, int valor){
	vetor[p] = valor;
	
	
}

int index(int valor){
	for(int i=0;i<ultimo;i++){
		if (vetor[i]==valor)
		    return i;
	}
	return -1;
	
}

int valor_index(int index){
	for (int i =0; i< ultimo; i++){
		if (i == index)
			return vetor[i];
	}
}

int count(int valor){
	int total = 0;
	for (int i = 0; i < ultimo; i++ ){
		if (valor == vetor[i]){
			total += 1;
		}
	}
	return total;
}

int len(){
	return ultimo+1;
}

main(){
	append(20);
	append(10);
	append(5);
	percorre();
	inserir(2,17);
	int achou = index(10);
	percorre();
	if (achou==-1)
	   cout<<"nao encontrou!!";
	else
	   cout<<"encontrou na posicao "<<achou;
	
	
}
