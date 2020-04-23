#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int column[n];
    for(int i=0; i<n; i++)
    {
        cin >> column[i];
    }
    for(int i=n-1; i>=0; i--)
    {
        for(int j=0; j<i; j++)
        {
            if(column[j]>column[j+1])
            {
                swap(column[j], column[j+1]);
            }
        }
    }
    for(int i=0; i<n; i++)
    {
        cout << column[i];
        if(i!=n-1)
        {
            cout << " ";
        }
    }
    return 0;
}