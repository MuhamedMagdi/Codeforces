#include <bits/stdc++.h>

using namespace std;

int main()
{
    multiset <int> price;
    int n, m, holder, total=0;
    cin >> n >> m;
    for(int i=0; i<n; ++i)
    {
        cin >> holder;
        price.insert(holder);
    }
    set <int> :: iterator it;
    for(it = price.begin(); it != price.end(); it++)
    {
        if(m == 0 || *it >=0)
        {
            break;
        }
        total+=*it;
        m--;
    }
    cout << abs(total) << endl;
    return 0;
}