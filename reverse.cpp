#include <iostream>
using namespace std;
int main()
{
    int reverse = 0, n, i;
    cout << "enter the number" << endl;
    cin >> n;
    while (n > 0)
    {
        i = n % 10;
        reverse = (reverse * 10) + i;
        n = n / 10;
    }
    cout << "reversed no is " << reverse << endl;
}