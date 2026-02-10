#include<iostream>
using namespace std;
int main()
{
    int n;
    cout <<"enter value you want for pattern" << endl;
    cin >> n;
    int i = 1;
    int k = 1;
    while (i<n+1)
    {
        int j = 1;
        int k = i;
        while (j<i+1)
        {
            
            cout << k <<" ";
            j=j+1;
            k=k-1;
        }
        cout << endl;
        i=i+1;
        
    }
    
}