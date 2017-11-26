#include <iostream>
#include <cstdlib>
#include <cstring>
using namespace std;

template<class x>
class exemplo{
public:
    static void soma(x v1, x v2)
    {
        cout << v1 + v2;
    }
};

int main() {
    exemplo<int> tipo1;
    tipo1.soma(2, 3);
    return 0;
}