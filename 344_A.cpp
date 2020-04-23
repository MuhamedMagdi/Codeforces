#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c=1;
    string oldM, newM;
    cin >> n;
    for(int i=0; i<n; ++i)
    {
        if(!i) cin >> oldM;
        else cin >> newM;
        if(i)
        {
            if(newM[0] == oldM[1]) c++;
            oldM = newM;
        }
    }
    cout << c << endl;
    return 0;
}
