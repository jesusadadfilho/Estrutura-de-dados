#include <iostream>
#include <string>
#include <cstring>
#include <stdlib.h>
using namespace std;

class x{
	public:
		char valor;
		x *anterior;
		x(char a){
			valor = a;
			anterior = NULL;
		}
};

bool verifica(char palavra){
	int len = strlen(palavra);
	x a;
	pilha b;
	for(int i =0; i < len/2;i++){
		a = new x(palavra[i]);
		b.empilhar(a);
	}
	for(int i = len/2 + x%2; i < len;i++){
		if(palavra[i] == b.getTopo()){
			b.desempilhar();
		}
		else
		{
			return false;
		}
	}
	
}
class pilha{
	private:
		int index;
		x *topo;
	public:
		pilha(){
			this->index = 0;
			this->topo = NULL;
		}
		void empilhar(x *valor){
			valor->anterior = this->topo; 
			this->topo = valor;
			this->index++;
			
		}
		char desempilhar(){
			char a = topo->valor;
			x *tmp = topo;
			if(this->index > 0){
				tmp = this->topo;
				topo = topo->anterior;
				this->index--;
				return a ;
			}
			return NULL;
		}
		char getTopo(){
			return this->topo;
		}
		int tam(){
			return this->index;
		}
};

int main()
{ 
	char palavra[30];
	cout<<"digite a palavra e seu inverso: ";
	cin>>palavra;
	verifica(palavra);
	
	system("pause")
	return 0;
}

