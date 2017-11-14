 #include <iostream>
 #include <string>
 
 using namespace std;

 class Pessoa{
	 private:
	 	string nome;
	 	int altura;
	 public:
	 	string getnome() const;
	 	void setnome(string);
	 	int getaltura() const;
	 	void setaltura(int);

};
 
 string Pessoa::getnome() const
 {return nome;}
 
void Pessoa::setnome(string s){
	if(s.length() == 0)
		nome = "Nome nao escrito";
	else
		nome = s;
}

int Pessoa::getaltura() const{
	return altura;
}

void Pessoa::setaltura(int h){
	if (h < 0)
		altura = 0;
	else
		altura = h;
}

void setvalores(Pessoa&);
void getvalores(const Pessoa&);

int main(){
	Pessoa p1;
	setvalores(p1);
	cout << "Saida de dados da pessoa\n";
	cout << "========================\n";
	getvalores(p1);
	return 0;
}

 void setvalores(Pessoa& pers)
 {
   string str;
   int h;
   cout << "Digite o nome da pessoa: ";
   getline(cin,str);
   pers.setnome(str);
   cout << "Digite a altura da pessoa: ";
   cin >> h;
   cin.ignore();
   pers.setaltura(h);
 }

void getvalores(const Pessoa& pers){
	cout << "Nome da pessoa: "<< pers.getnome() <<endl;
	cout << "A altura da pessoa em centimetros eh: "<< pers.getaltura()<< endl;
	
}