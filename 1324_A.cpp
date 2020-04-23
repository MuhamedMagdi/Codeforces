#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    int n;
    bool flag;
    cin >> t;
    for(int i=0; i<t; i++)
    {

        cin >> n;
        int arr[n];
        flag = true;
        for(int j=0; j<n; j++)
        {
            cin >> arr[j];
        }
        sort(arr, arr+n);
        int d = arr[0];
        for(int j=0; j<n; j++)
        {
            arr[j]-=d;
        }
        for(int j=0; j<n; j++)
        {
            if(arr[j]%2 != 0)
            {
                flag = false;
                break;
            }
        }
        if(flag == true)
        {
            cout << "YES\n";
        }
        else
        {
            cout << "NO\n";
        }
    }
    return 0;
}
