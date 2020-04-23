#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    stringstream s;
    cin >> n >> t;
    if(t == 10 && n==1)
    {
        cout << -1 << endl;
    }
    else
    {
        if(t==10)
        {
            t=1;
        }
        s << t;
        for(int i=0; i<n-1; i++)
        {
            s << 0;
        }
        cout << s.str() << endl;
    }
    return 0;
}
