#include <bits/stdc++.h>

using namespace std;

int main()
{
    int c=0;
    string s;
    cin >> s;
    stack<char> p;
    for(int i=0; i<s.length(); i++)
    {
        if(s[i] == '(')
        {
            p.push(s[i]);
        }
        else if(s[i] == ')' && !p.empty())
        {
            p.pop();
            c++;
        }
    }
    cout << c*2 << endl;
    return 0;
}
