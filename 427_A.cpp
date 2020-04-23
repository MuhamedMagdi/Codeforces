#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, holder, c=0, p=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> holder;
        if(holder<0)
        {
            c++;
            if(p>0)
            {
                c--;
                p--;
            }
        }
        else p+= holder;
    }
    cout << c;
    return 0;
}
