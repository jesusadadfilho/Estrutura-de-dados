#include <iostream>
#include <string.h>
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

bool cmp(char s[],char s2[]){
	int i = 0;
	while(*(i+s)!= NULL && *(i+s2)!= NULL){
		if(s[i] != s2[i]){
			return false;
		}
		else{
			i++;
		}
	}
	return true;
}

void cat(char s[],char s2[]){
	int i = len(s);
	int j = 0;
	while(*(j+s2)!= NULL){
		s[i] = s2[j];
		i ++;
		j ++;
	}
	//cout<<s;
}




int main()
{
	char nome[] = "Fulano";
	char nome2[] = "fulano2";
	//cout <<len(nome);
	if (cmp(nome,nome2)){
		cout << "sao iquais"<<endl;	
	}
	else
	{
		cout<< "sao diferentes"<<endl;
	}
	cat(nome,nome2);
	cout<<nome<<endl;
	system("pause");
		
		
	
	return 0;
}