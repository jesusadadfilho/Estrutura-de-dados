#include <iostream>
#include <stdio.h>

using namespace std;

class aluno{
	private:
		int mat;
		string nome;
	public:
		aluno(string s){
			this->nome = s;
		}
		void getMat(){
			cout<<this->mat;
		}
		void getNome(){
			cout<<this->nome;
		}
	
};

template<class x>
class generica{
	
}

int main()
{
	aluno joao("Ze");
	joao.getNome();
	return 0;
}