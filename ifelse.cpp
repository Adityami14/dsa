#include <iostream>
using namespace std;
int main()
{
    /*int a;
    cin >> a;
    
    int b = 5;
    cout << a << endl;
    if (a<b)
    {
        cout << "b is greater" << endl;
    }
    else
    {
        cout << "a is greater" << endl;
    }
   int c;
   cout << "enter a number" << endl;
   cin >> c;
   if (c>0)
   {
    cout << "greater than 0" << endl;
   }
   else if (c<0)
   {
    cout << "smaller than 0" << endl;
   }
   else
   {
    cout << "equal to 0" << endl;
   }*/
  int i = 2;
  int m;
  cout << "enter value of m" << endl;
  cin >> m;
  while (i<m)
  {
    if(m%i==0)
    {
        cout << "not a prime number" << endl;
    }
    else
    {
        cout << "it is a prime" << endl;
    }
    i++;
  }
  
    return 0;
}