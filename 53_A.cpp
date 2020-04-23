#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s, holder;
    int n;
    set<string> out;
    cin >> s;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> holder;
        if(holder.find(s) == 0)
        {
            out.insert(holder);
        }
    }
    if(out.size())
    {
        cout << *out.begin() << endl;
    }
    else
    {
        cout << s << endl;
    }
    return 0;
}
