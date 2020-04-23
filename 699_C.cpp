#include <bits/stdc++.h>

using namespace std;

int rest[100] = {-1};

int main()
{
    int n, r=0;
    cin >> n;
    int day[n];
    for(int i=0; i<n; i++)
    {
        cin >> day[i];
    }
    if(day[0] == 0) r++;
    for(int i=1; i<n; i++)
    {
        switch(day[i])
        {
        case 0:
            r++;
            break;
        case 1:
            if(day[i-1] == 1)
            {
                r++;
                day[i] = 0;
            }
            break;
        case 2:
            if(day[i-1] == 2)
            {
                r++;
                day[i] = 0;
            }
            break;
        case 3:
            if(day[i-1] == 1)
            {
                day[i] = 2;
            }
            else if(day[i-1] == 2)
            {
                day[i] = 1;
            }
            break;
        }
    }
    cout << r << endl;
    return 0;
}
