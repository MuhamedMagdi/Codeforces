#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, holder;
    cin >> n;
    int worm[n];
    for(int i=0; i<n; i++)
    {
        cin >> holder;
        if(i)
        {
            worm[i] = worm[i-1] + holder;
        }
        else
        {
            worm[i] = holder;
        }
    }
    int t;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> holder;
        cout << lower_bound(worm, worm+n, holder)-worm+1 << endl;
    }
    return 0;
}
