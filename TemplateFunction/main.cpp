//
// Template function example
// from: Zybooks, Programming in C++ section 13
//
#include <iostream>
using namespace std;

//
// function must be preceded by the following line...
//    In this case, we are passing 2 generic parameters and returning 1,
//    of type T1
// Be sure to modify the parameters of the function accordingly
//
template<typename T1, typename T2>
T1 TripleMin(T1 item1, T2 item2, T2 item3) {
   T1 minVal = item1; // Holds min item value, init to first item
   
   if (item2 < minVal) {
      minVal = item2;
   }
   if (item3 < minVal) {
      minVal = item3;
   }
   
   return minVal;
}

int main() {
   int num1 = 55;
   int num2 = 99;
   int num3 = 66;
   double dbl1 = 12.5;
   
   cout << "Items: " << num1 << " " << num2 << " " << num3 << endl;
   cout << "Min: " << TripleMin(num1, num2, num3) << endl << endl;
   
   cout << "Items: " << dbl1 << " " << num2 << " " << num3 << endl;
   cout << "Min: " << TripleMin(dbl1, num2, num3) << endl << endl;
      
   return 0;
}
