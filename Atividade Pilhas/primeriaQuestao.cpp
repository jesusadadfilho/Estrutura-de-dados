#include <iostream>;
#include <string>
using namespace std;


class expresao{
	protected:
		string elementos[];
		char[] delimitadores = {'{', '[', '(', ')', ']', '}'};
	private:
		int topo;
	public:
		expresao(int tam){
			this->topo = -1;
			this->elementos[tam];
		}
		void empilhar(char x){
			this->topo++;
			this->elementos[this->topo] = x;
		}	
		void densempilhar(){
			this->topo--;
		}
		char topElement(){
			return this->elementos[this->topo];
		}
		bool pilhaCheia(){
			return(this->topo == this->elementos->le);
		}
	
}