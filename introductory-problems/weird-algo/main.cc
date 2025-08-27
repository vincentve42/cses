#include <bits/stdc++.h>

using namespace std;

int main() 
{
    int a;
    cin >> a;
    cout << a << " ";
    for(a; a > 1;)
    {
        int cek = a % 2;
        if(cek > 0)
        {
            a *= 3;
            a += 1;
            cout << a << " ";
        }
        else
        {
            a = a / 2;
            cout << a << " ";
        }
        
        
        
    }
    return 0;
}

