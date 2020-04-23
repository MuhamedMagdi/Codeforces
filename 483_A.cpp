#include<bits/stdc++.h>

using namespace std;

int main()
{
    long long n, m;
    cin >> n >> m;
    for(long long i=n; i<m; i++)
    {
        for(long long k = n+1; k<m; k++)
        {
            if(__gcd(k,i) == 1)
            {
                for(long long j=k+1; j<=m; j++)
                {
                    if(__gcd(i, j) != 1 && __gcd(j, k) ==1)
                    {
                        cout << i << " " << k << " " << j << endl;
                        return 0;
                    }
                }
            }
        }
    }
    cout << -1 << endl;
    return 0;
}
