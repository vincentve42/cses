#include <bits/stdc++.h>

using namespace std;

int main() 
{
    unsigned long long int a;
    cin >> a;
    cout << a << " ";
    for(a; a > 1;)
    {
        int cek = a % 2;
        
        if(cek == 0)
        {
            a = a / 2;
            cout << a << " ";
            
        }
        else
        {
            a *= 3;
            a += 1;
            cout << a << " ";
        }
        
        
        
    }
    return 0;
}

