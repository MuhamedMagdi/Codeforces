#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, holder;
    set<int> num;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> holder;
        num.insert(holder);
    }
    if(num.size()>1)
    {
        cout << *(++num.begin()) << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
