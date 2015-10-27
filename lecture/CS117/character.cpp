#include <iostream>

using namespace std;

int main()
{
   double primes [] = {2,3,5,7,11,13};
    double *p = primes +2;

    cout << primes[1]<<endl;
    cout <<primes +1 <<endl;
    cout << *(primes +1)<<endl;
    cout <<"bla " << *(p-1)<<endl;
    cout <<*(p+1)<<endl;
    cout << p+1<<endl;
    cout << primes +3 <<endl;

}























