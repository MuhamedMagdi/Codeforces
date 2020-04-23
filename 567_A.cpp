#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int c[n];
    for(int i=0; i<n; i++)
    {
        cin >> c[i];
    }
    sort(c, c+n);
    for(int i=0; i<n; i++)
    {
        if(i !=0 && i!=n-1)
        {
            if(c[i]-c[i-1]< c[i+1]-c[i])
            {
                cout << c[i]-c[i-1] << " ";
            }
            else
            {
                cout << c[i+1]-c[i] << " ";
            }
            if(c[i]-c[0] > c[n-1]-c[i])
            {
                cout << c[i]-c[0] << endl;
            }
            else
            {
                cout << c[n-1]-c[i] << endl;
            }
        }
        else
        {
            if(i == 0)
            {
                cout << c[1]-c[0] << " " << c[n-1]-c[0] << endl;
            }
            else
            {
                cout << c[i] - c[i-1] << " " << c[n-1]-c[0] << endl;
            }

        }
    }
    return 0;
}
