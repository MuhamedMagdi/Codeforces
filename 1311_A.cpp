#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, num;
    cin >> num;
    for(int i=0; i<num; i++)
    {
        cin >> n >> m;
        if(n == m)
        {
            cout << 0 << endl;
        }
        else if(n < m)
        {
            if(n%2 == 0 && m%2 ==0)
            {
                cout << 2 << endl;
            }
            else if(n%2 == 0&& m%2 !=0)
            {
                cout << 1 << endl;
            }
            else if(n%2 != 0 && m%2 ==0)
            {
                cout << 1 << endl;
            }
            else if(n%2 != 0&& m%2 !=0)
            {
                cout << 2 << endl;
            }
        }
        else
        {
            if(n%2 == 0 && m%2 ==0)
            {
                cout << 1 << endl;
            }
            else if(n%2 == 0&& m%2 !=0)
            {
                cout << 2 << endl;
            }
            else if(n%2 != 0 && m%2 ==0)
            {
                cout << 2 << endl;
            }
            else if(n%2 != 0&& m%2 !=0)
            {
                cout << 1 << endl;
            }
        }
    }
    return 0;
}
