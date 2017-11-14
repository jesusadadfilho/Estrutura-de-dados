#include <stdio.h>
#include <iostream>
using namespace std;

char vetor[5] = {'A','E','I','O','U'};



int len(){
	int len = sizeof(vetor) / sizeof(vetor[0]);
	return len;
}

void imprimir(){
	cout<<vetor<<endl;
}

void imprimirInverter(){
	for  (int i = (len()-1); i >= 0; i--){
		cout<<vetor[i];
	}
}

//void lerValores(){
	//for  (int i = 0; i< len(); i++){
		//cin >> vetor[i];
	//}
//}

main(){
	//lerValores();
	imprimir();
	imprimirInverter();
	
}