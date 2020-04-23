#include <bits/stdc++.h>

using namespace std;

int main()
{
    bool flag=false;
    int a[4];
    long long c=0;
    for(int i=0; i<4; i++)
    {
        cin >> a[i];
        if(a[i]) flag=true;
    }
    if(!flag)
    {
        cout << 0 << endl;
        return 0;
    }
    string num;
    cin >> num;
    for(int i=0; i<num.length(); i++)
    {
        c+=a[num[i]-'1'];
    }
    cout << c << endl;
    return 0;
}
