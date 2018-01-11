#include <iostream>
#include <stdio.h>
#include <cstdlib>

using namespace std;
class aluno{
	private:
		string nome;
		int matricula;
		int media;
	public:
		void novo(string n, int m, int me){
		   	this->nome = n;
		   	this->matricula = m;
			this->media = me;
	   	}
	
		string Situacao(){
			if(this->media >= 7){
				return "aprovado";
			}
		   	return "reprovado";
		}
	
		void setMatricula(int m){
		   	this->matricula = m;
	   	}
	
		void setMedia(int me){
		   	this->media = me;
		}
		string getNome(){
			return this->nome;
		}
		int getMatricula(){
			return this->matricula;
		}
		int getMedia(){
			return this->media;
		}
	
	
};

class alunos{
	private:
		int index;
	public:
		aluno *vetor;
		alunos(){
			vetor = new aluno[10];
			index = 0;
		}
		
		void inserir(){
			int m,me;
			string n;
			cout<<"Digite o nome do aluno: ";
			cin>>n;
			cout<<"Digite a matricula do aluno: ";
			cin>>m;
			cout<<"Digite a media do aluno: ";
			cin>>me;
			cout<<"Cadastro realizado com sucesso.\n";
			system ("pause");
			vetor[index].novo(n,m,me);
			index++;
		}
		bool existi(int i){
			if(i<this->index){
				return true;
			}
			return false;
		}
		int len(){
			return this->index;
		}
		aluno buscar(int i){
			if(existi(i)){
				return vetor[i];
			}
		}
		void listar(){
			for(int i=0;i<this->index;i++){
				cout<<"\n"<<vetor[i].getNome()<<" / "<<vetor[i].getMatricula()<<" / "<<vetor[i].Situacao()<<"\n";
			}
			system ("pause");
		}
		void remover(){
			int indece;
			cout<<"Digite o index que quer excluir: ";
			cin>>indece;
			for(int i = indece;i<this->index;i++){
				vetor[i] = vetor[i+1];
			}
			this->index--;
			system ("pause");
		}
		void setValores(int j, int me, int mat){
			if(existi(j)){
				vetor[j].setMedia(me);
				vetor[j].setMatricula(mat);
			}
		}
		void menu(){
			int op;
			cout<<"Sistema de registro de alunos.\n1. Cadastrar novo aluno.\n2. Listar alunos\n3. Remover aluno por index.\nDigite a opcao de operacao: ";
			cin>>op;
			system ("cls");
			switch(op)
			{
			case 1:
				this->inserir();
				system ("cls");
				this->menu();	
			case 2:
				this->listar();
				system ("cls");
				this->menu();
			case 3:
				this->remover();
				system ("cls");
				this->menu();
			default:
				cout<<"opcao invalida";
				break;
			}
		}
		
		
};	

int main()
{
	alunos classe;
	classe.menu();
	return 0;
}	
		