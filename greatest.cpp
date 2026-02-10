#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "enter first number" << endl;
    cin >> a;
    cout << "enter second number" << endl;
    cin >> b;
    cout << "enter third number" << endl;
    cin >> c;
    if (a > b)
    {
        if (a > c)
        {
            cout << "first is the greatest which is " << a << endl;
        }
        else
        {
            cout << "third is the greatest which is " << c << endl;
        }
    }
    else if (b > c)
    {
        cout << "second is the greatest which is " << b << endl;
    }
    else
    {
        cout << "third is the greatest which is " << c << endl;
    }
}