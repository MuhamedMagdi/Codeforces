#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    stack <char> current;
    cin >> s;
    for(int i=0; i<s.length(); i++)
    {
        if(current.empty() || current.top()!=s[i])
        {
            current.push(s[i]);
        }
        else
        {
            current.pop();
        }
    }
    if(current.empty())
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
    return 0;
}
