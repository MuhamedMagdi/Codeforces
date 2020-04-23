#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=2;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    long long tree[n][2];
    for(int i=0; i<n; i++)
    {
        cin >> tree[i][0] >> tree[i][1];
    }
    for(int i=1; i<n-1; i++)
    {
        if(tree[i][0]-tree[i][1] > tree[i-1][0])
        {
            c++;
        }
        else
        {
            if(tree[i][0]+tree[i][1] < tree[i+1][0])
            {
                c++;
                tree[i][0] = tree[i][0]+tree[i][1];
            }
        }
    }
    cout << c << endl;
    return 0;
}
