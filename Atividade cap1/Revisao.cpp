#include <iostream>
#include <stdlib.h>
using namespace std;

void alo(){
	int num;
	cin >> num;
	do{
		num--;
		cout<<num<<endl;
	}while(num > 1);
}

int main()
{
	int *p;
	int a = 10;
	p = &a;
	cout<<"testando prints\n";
	cout<<"testando";
	cout<<" vai dar certo\n";
	cout<<p;
	//alo();
	return 0;
	
}