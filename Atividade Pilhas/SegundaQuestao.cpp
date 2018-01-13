#include <iostream>;
#include <string>
#include <cstring>
#include <stdlib.h>

using namespace std;
int len(char s[]){
	int i = 0;
	while(*(i+s)!= NULL)
	{
	  i++;  	
	}
	return i;
}

template<class x>
class pilha{
private:
	int index;
	x lista[];
public:
	pilha(){
		this->index = -1;
	}
	void empilhar(x valor){
		this->index++;
		this->lista[this->index] = valor;
	}
	x desempilhar(){
		x a = this->lista[this->index];
		this->index--;
		return a;
	}
	int tam(){
		return this->index;
	}
};

int main()
{
	pilha<char> lista;
	char *c;
	cout<<"Digite uma palavra\n";
	cin>>*c;
	for(int i =0 ;len(c)-1;i++){
		lista.empilhar(c[i]);
	}
	
	system("pause");
	return 0;
}