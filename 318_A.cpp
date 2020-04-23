#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long k, n;
    cin >> k >> n;
    if(k%2 == 0)
    {
        if (n<=k/2)
            cout << (k-1)-(k/2-n)*2 << endl;
        else
            cout << k-(k-n)*2 << endl;
    }
    else if(k%2 != 0)
    {
        if (n<=k/2+1)
            cout << k-(k/2+1-n)*2 << endl;
        else
            cout << (k-1)-(k-n)*2 << endl;
    }
    return 0;
}