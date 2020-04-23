#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long n, c, ice, counter=0;
    char s;
    cin >> n >> c;
    for(int i=0; i<n; i++)
    {
        cin >> s >> ice;
        if(s == '+')
        {
            c+=ice;
        }
        else
        {
            if(c>=ice)
            {
                c-=ice;
            }
            else
            {
                counter++;
            }
        }
    }
    cout << c << " " <<counter;
    return 0;
}
