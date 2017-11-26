#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;
 
template<class x>
class exemplo{
	public:
		void soma(x variavel,x variavel2){
			cout<<variavel +variavel2;
		}	
		void subtracao(x variavel,x variavel2){
			cout<<variavel - variavel2;
		}
};


int main()
{
	exemplo<double> tipo1;
	tipo1.subtracao(1.4,0.7);

	return 0;
}