#include <bits/stdc++.h>

using namespace std;

int car[100]={0};

int main()
{
    int n, holder;
    cin >> n;
    for(int i=0; i<n;i++)
    {
        for(int j=0; j<n; j++)
        {
            cin >> holder;
            if(holder == 1)
            {
                car[i] = -1;
            }
            else if(holder == 2)
            {
                car[j] = -1;
            }
            else if(holder == 3)
            {
                car[j] = -1;
                car[i] = -1;
            }
        }
    }
    int c=0;
    set <int> no;
    for(int i=0; i<n; i++)
    {
        if(car[i]==0)
        {
            no.insert(i);
            c++;
        }
    }
    set <int> :: iterator it;
    cout << c << endl;
    for(it=no.begin(); it!=no.end(); it++)
    {
        cout << *it+1 << " ";
    }
    cout << endl;
    return 0;
}
