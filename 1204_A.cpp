#include <bits/stdc++.h>

using namespace std;

int main()

{
    string s;
    bool flag = false;
    cin >> s;
    reverse(s.begin(),s.end());
    if(s.length()%2 == 0)
    {
        cout << s.length()/2 << endl;
        return 0;
    }
    for(int i=0; i<s.length()-1; i++)
    {
        if(s[i] == '1')
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout << s.length()/2+1 << endl;
    }
    else
    {
        cout << s.length()/2 << endl;
    }
    return 0;
}
