#include <iostream>
#include <cstdlib>
#include <cstring>
#include <stdlib.h>
using namespace std;
 
template<class x>
class exemplo{
	public:
		int index;
		x vetor[50];
		exemplo(){
			this -> index = 0;
 		}
		void inserir(int p, x valor){
		 for(int i=index;i>p;i--)
			vetor[i]=vetor[i-1];
		 index++;
		 vetor[p]=valor;
		
		}
		int posicao(x valor){
		for(int i=0;i<index;i++){
			if (vetor[i]==valor)
				return i;
		}
		return -1;
		
		}

		void soma(x variavel,x variavel2){
			cout<<variavel +variavel2;
			cout<<index;
		}	
		void subtracao(x variavel,x variavel2){
			cout<<variavel - variavel2<<endl;
			cout<<this->index<<endl;
		}
};


int main()
{
	exemplo<double> tipo1;
	//tipo1.index = 0;
	tipo1.soma(1.4,0.7);
	tipo1.inserir(1,33);
	cout<<tipo1.posicao(33);
	system("pause");

	return 0;
}