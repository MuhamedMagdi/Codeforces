#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, holder;
    cin >> n;
    set<int> levels;
    for(int i=0; i<2; i++)
    {
        cin >> m;
        for(int j=0; j<m; j++)
        {
            cin >> holder;
            levels.insert(holder);
        }
    }
    if(levels.size()==n)
    {
        cout << "I become the guy.\n";
    }
    else
    {
        cout << "Oh, my keyboard!\n";
    }
    return 0;
}
