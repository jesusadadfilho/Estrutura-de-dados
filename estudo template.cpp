#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

template <typename T>
inline T const& Maior (T const& a, T const& b) { 
   return a < b ? b:a; 
}

int main () {
   int i = 39;
   int j = 20;
   cout << "Maior(i, j): " << Maior(i, j) << endl; 

   double f1 = 13.5; 
   double f2 = 20.7; 
   cout << "Maior(f1, f2): " << Maior(f1, f2) << endl; 

   string s1 = "Hello"; 
   string s2 = "World"; 
   cout << "Maior(s1, s2): " << Maior(s1, s2) << endl; 

   return EXIT_SUCCESS;
}