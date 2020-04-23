#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, request;
    cin >> n;
    long long price[n], sorted[n];
    for(int i=0; i<n; i++)
    {
        int holder;
        cin >> holder;
        price[i]=holder;
        sorted[i]=holder;
    }
    sort(sorted, sorted+n);
    for(int i=1; i<n; i++)
    {
        price[i]=price[i]+price[i-1];
        sorted[i]=sorted[i]+sorted[i-1];
    }
    cin >> request;
    for(int i=0; i<request; i++)
    {
        int type, l, r;
        cin >> type >> l >> r;
        r--;
        l-=2;
        switch(type)
        {
            case 1:
                if(l<0) cout << price[r] << endl;
                else cout << price[r]-price[l] << endl;
                break;
            case 2:
                if(l<0) cout << sorted[r] << endl;
                else cout << sorted[r]-sorted[l] << endl;
                break;
        }
    }
    return 0;
}