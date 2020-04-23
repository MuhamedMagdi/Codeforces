#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a, b, s;
    cin >> a >> b >> s;
    if(((abs(a)+abs(b))-s)%2 == 0 && s >= abs(a)+abs(b))
        cout << "YES" << endl;
    else
        cout << "NO" <<endl;
}