#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, loop=0;
    cin >> n;
    for(int i=0; i<=n; i++)
    {
        for(int space=loop; space<n*2; space++)
        {
            cout << " ";
        }
        for(int j=0; j<=i; j++)
        {
            cout << j;
            if(i!=0)
            {
                cout << " ";
            }
        }
        for(int j=i-1; j>=0; j--)
        {
            cout << j;
            if(j!=0)
            {
                cout << " ";
            }
        }
        cout << endl;
        loop+=2;
    }
    loop=2;
    for(int i=n-1; i>=0; i--)
    {
        for(int space=0; space<loop; space++)
        {
            cout << " ";
        }
        for(int j=0; j<=i; j++)
        {
            cout << j;
            if(i!=0)
            {
                cout << " ";
            }
        }
        for(int j=i-1; j>=0; j--)
        {
            cout << j;
            if(j!=0)
            {
                cout << " ";
            }
        }
        cout << endl;
        loop+=2;
    }

    return 0;
}