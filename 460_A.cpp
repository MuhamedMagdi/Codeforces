#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, c=0;
    cin >> n >> m;
    while(n--)
    {
        if((c+1)%m == 0)
        {
            n++;
        }
        c++;
    }
    cout << c << endl;
    return 0;
}
