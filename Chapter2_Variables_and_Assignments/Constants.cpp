#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double AVAGADROS_CONSTANT = 6.02e-23;
    const double PI=3.14159;
    double ans = PI * 5;
    cout  << setprecision(5);
    std::cout << "ans = " << ans << std::endl;
    return 0;
}
