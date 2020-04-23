#include <bits/stdc++.h>

using namespace std;

int main() {
    int c=1, j=0;
    string s, t;
    cin >> s >> t;
    for(int i=0; i<s.length();)
    {
        if(i==t.length() || j==t.length()) break;
        if(s[i] == t[j])
        {
            i++;
            c++;
        }
        j++;
    }
    cout << c << endl;
    return 0;
}