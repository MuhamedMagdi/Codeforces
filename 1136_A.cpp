#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int page = 0;
    int chapter[num*2];
    chapter[0] = 0;
    for(int i=1; i<=num*2; i++)
    {
        cin >> chapter[i];
    }
    cin >> page;
    for(int i=2; i<=num*2; i=i+2)
    {
        if(page <= chapter[i] && page >= chapter[i-1])
        {
            cout << ((num*2)-(i-2))/2;
            break;
        }
    }
}