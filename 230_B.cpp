#include <bits/stdc++.h>

using namespace std;

bool prime[1000001];
long long MAX = 1000001;
void sieve()
{
    memset(prime, true, sizeof(prime));
    prime[0]=false;
    prime[1]=false;
    for(int i=2; i<=MAX; i++)
    {
        if(prime[i])
        {
            for(int j=i*2; j<=MAX; j+=i)
            {
                prime[j]= false;
            }
        }
    }
}

int main()
{
    sieve();
    int n, c;
    long long holder;
    cin >> n;
    while(n--)
    {
        cin >> holder;
        long long sqt =sqrt(holder);
        if(sqt*sqt == holder && prime[sqt])
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
