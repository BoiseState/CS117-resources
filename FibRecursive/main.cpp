// FibRecursive.cpp : Defines the entry point for the console application.
//


#include <iostream>
#include <stdlib.h>

using namespace std;

int fib(int n)
{
    if (n == 1 || n == 0 )
    {
        return 1;  // the only time we return to the caller
    }
    return fib(n - 2) + fib(n - 1);  // here's where we 'call' ourself
}
int main(int argc, char * argv[])
{
    int i, n, result;

    cout << "The fibonnaci sequence will be computed to n\'th sequence" << endl;
    cout << "Enter the n\'th element th compute the fibonnaci sequence: ";
    cin >> n;

    for (i = 0; i <= n; i++)
    {
        result = fib(i);
        cout << "Fib(" << i << ") = " << result << endl; // ", ";
    }
    cout << endl;
    system("pause");
    return 0;
}

