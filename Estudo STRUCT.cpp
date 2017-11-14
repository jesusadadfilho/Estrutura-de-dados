#include <iostream>
#include <cstdlib>
using namespace std;

struct data{
	int dia;
	int mes;
	int ano;
};

int main(){
	data hoje;
	hoje.dia = 13;
	hoje.mes = 11;
	hoje.ano = 2017;
	cout << "Hoje e "<<hoje.dia<<"/"<<hoje.mes<<"/"<<hoje.ano<<endl;
	
	
	
	system("pause");
	return EXIT_SUCCESS;
}