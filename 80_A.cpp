#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n, m;
    bool flag;
    cin >> n >> m;
    for(int i=n+1; i<=m; i++)
    {
        flag = true;
        for(int j=2; j<i; j++)
        {
            if(i%j == 0)
            {
                flag = false;
                break;
            }
        }
        if(flag && i==m)
        {
            cout << "YES" << endl;
            return 0;
        }
        else if(flag && i!=m)
        {
            cout << "NO" << endl;
            return 0;
        }
    }
    cout << "NO" << endl;
    return 0;
}
