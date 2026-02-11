#include<iostream>
using namespace std;
int main()
{
    int i,j,n,reverse=0;
    cout << "enter the number" << endl;
    cin >> n;
    j=n;
    while (n>0)
    {
        i=n%10;
        reverse=reverse+(i*i*i);
        n=n/10;
    }
    if (reverse==j)
    {
        cout << "Number is armstrong" << endl;
    }
    else
    {
        cout << "Number is not armstrong" << endl;
    }
}