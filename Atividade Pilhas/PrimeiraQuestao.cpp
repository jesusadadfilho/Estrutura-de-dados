#include <iostream>
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

void expresao(char s[]){
	char del[] = {"[{()}]"};
	int quant = 0;
	for(int i = 0;i<len(s);i++ ){
		for(int j = 0;j<len(del);j++){
			if(s[i] == del[j]){
				quant++;
			}
		}
	}
	char us[quant];
	int pos = 0;
	for(int i = 0;i<len(s);i++ ){
		for(int j = 0;j<len(del);j++){
			if(s[i] == del[j]){
				us[pos] = s[i];
				pos++;
			}
		}
	}
	for(int i = 0; i < pos;i++){
		cout<<us[i];
	}
	cout<<quant<<"\n";
	
	if(quant%2!=0){
		cout<<"Expresao errada1\n";
	}
	else
	{
		for(int i=0; i<quant/2;i++){
			if(us[i] == del[0]){
				if(us[quant-1-i] != del[5]){
					cout<<us[quant-1-i]<<" "<<del[5]<<"\n";
					cout<<"Expresao errada2\n";
					return;
				}	
			}
			if(us[i] == del[1]){
				if(us[quant-1-i] != del[4]){
					cout<<us[quant-1-i]<<" "<<del[4]<<"\n";
					cout<<"Expresao errada3\n";
					return;
				}	
			}
			if(us[i] == del[2]){
				if(us[quant-1-i] != del[3]){
					cout<<us[quant-1-i]<<" "<<del[3]<<"\n";
					cout<<"Expresao errada4\n";
					return;
				}	
			}
		}
		cout<<"Expresao correta\n";
	}
}

int main()
{
	char f[] = {"{1+(3-5)+5+9"};
	expresao(f);
	system("pause");
	return 0;
}