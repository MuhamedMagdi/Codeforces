#include <bits/stdc++.h>

using namespace std;

int main()
{
    set <int> seller;
    bool flag=false;
    int n, m, number;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        cin >> number;
        int price;
        for(int j=0; j<number; j++)
        {
            cin >> price;
            if(price<m)
            {
                flag = true;
                seller.insert(i+1);
            }
        }
    }
    if(flag)
    {
        cout << seller.size() << endl;
        set<int> :: iterator it;
        for(it=seller.begin(); it!=seller.end(); it++)
        {
            cout << *it << " ";
        }
        cout << endl;
    }
    else
    {
        cout << 0 << endl;
    }
    return 0;
}
