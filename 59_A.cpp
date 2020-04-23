#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l=0, u=0;
    string s;
    cin >> s;
    for(int i=0; i<s.length(); ++i)
    {
        if(islower(s[i])) l++;
        else u++;
    }
    if(l>=u)
    {
        for(int i=0; i<s.length(); ++i)
            cout << (char) tolower(s[i]);
    }
    else
    {
        for(int i=0; i<s.length(); ++i)
            cout << (char) toupper(s[i]);
    }
    cout << endl;
    return 0;
}
