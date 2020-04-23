#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,counter=0;
    cin >> n;
    while(n!=0)
    {
        if(n&1==1)
        {
            counter++;
            n--;
        }
        else
        {
            n=n>>1;
        }
    }
    cout << counter << endl;
    return 0;
}