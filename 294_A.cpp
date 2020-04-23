#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int b[n];
    for(int i=0; i<n; i++)
    {
        cin >> b[i];
    }
    int t, r, p;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> r >> p;
        r--;
        if(r==n)
        {
            b[r-1] += (p-1);
            b[r] = 0;
        }
        else if(r==0)
        {
            b[r+1] += (b[r]-p);
            b[r] = 0;
        }
        else
        {
            b[r-1] += (p-1);
            b[r+1] += (b[r]-p);
            b[r] = 0;
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << b[i] << endl;
    }
    return 0;
}