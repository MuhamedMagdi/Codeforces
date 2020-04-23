#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sol=0;
    cin >> n;
    int color[n][2];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<2; j++)
        {
            int holder;
            cin >> holder;
            color[i][j]=holder;
        }
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            if(i==j) continue;
            else
            {
                if(color[i][1]==color[j][0]) sol++;
            }
        }
    }
    cout << sol << endl;
    return 0;
}