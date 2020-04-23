#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    char fchecker, checker;
    cin >> n;
    char s[n][n];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> s[i][j];
        }
    }
    checker = s[0][0];
    fchecker = s[0][1];
    for(int i=0; i<n; i++)
    {
        for(int j=i; j<n; j++)
        {
            if(!(s[i][j] == s[i][n-j-1]) || !(s[i][j] == checker))
            {
                cout << "NO\n";
                return 0;
            }
            else
            {
                break;
            }
        }
        for(int j=0; j<n; j++)
        {
            if(j == i || j == n-i-1)
            {
                continue;
            }
            else
            {
                if(s[i][j] != fchecker || s[i][j] == checker)
                {
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    cout << "YES\n" << endl;
    return 0;
}
