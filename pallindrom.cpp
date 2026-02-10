#include <iostream>
using namespace std;
int main()
{
    int reverse = 0, n, i,j;
    cout << "enter the number" << endl;
    cin >> n;
    j=n;
    while (n > 0)
    {
        i = n % 10;
        reverse = (reverse * 10) + i;
        n = n / 10;
    }
    if (j==reverse)
    {
        cout << " Number is pallindrom " << endl;
    }
    else
    {
        cout << " Number is not pallindrom " << endl;
    }
    
}