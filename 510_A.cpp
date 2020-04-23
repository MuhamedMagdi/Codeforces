#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, l=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<m; j++)
        {
            if(i%2==0)
            {
             cout << "#";
            }
            else
            {
                if((j==m-1 && l%2!=0) || (j==0 && l%2==0))
                {
                    cout << "#";
                    continue;
                }
                cout << ".";
            }
        }
        if(i%2==0) l++;
        cout << endl;
    }
    return 0;
}
