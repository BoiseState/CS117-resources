/*
 * Program to determine the units of each digit in a number
 */
#include <iostream>
#include <cmath>
#include <string>
#include <cstdlib>

using namespace std;

int GetLargestPowerOf10(int num){
    int largestPower = 0;
    return largestPower;
}
int main() {
    string strAsNum;
    int powersOf10[7] = {1,10,100,1000,10000,100000,1000000};
    int digitsOfNum[7] = {0};
    cout << "Enter a whole # (less than 1,000,000): ";
    cin >> strAsNum;
    int len = strAsNum.length();
    int largestPow10 = len - 1;
    int currentPow10 = largestPow10;
    int num = atoi(strAsNum.c_str());
    int rollingNum = num;
    while (currentPow10 >= 0) {
        digitsOfNum[currentPow10] = rollingNum / (pow(10.0,currentPow10));
        double tenpower=pow(10,currentPow10);
        rollingNum -= digitsOfNum[currentPow10] * (static_cast<int>(tenpower));
        currentPow10--;
    }
    digitsOfNum[currentPow10] = rollingNum;
    for (int i = largestPow10; i >= 0; i--){
        cout << powersOf10[i] << "'s digit = " << digitsOfNum[i] << endl;
    }

    return 0;
}
