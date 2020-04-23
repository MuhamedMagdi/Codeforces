#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for(int j=0; j<t; j++)
    {
        bool flag = false;
        int n;
        cin >> n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin >> arr[i];
        }
        if(n%2 !=0)
        {
            for(int w=1; w<n; w++)
            {
                for(int i=w; i<n; i++)
                {
                    if(arr[w-1] == arr[i+1])
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            if(!flag)
                cout << "NO" << endl;
        }
        else
        {
            for(int w=2; w<n; w++)
            {
                for(int i=w; i<=n-1; i++)
                {
                    if((arr[w-2] == arr[i+1] && arr[w-1] == arr[i]) || arr[w-2] == arr[i])
                    {
                        flag = true;
                        break;
                    }
                }
                if(flag)
                {
                    cout << "YES" << endl;
                    break;
                }
            }
            if(!flag)
                cout << "NO" << endl;
        }
    }
    return 0;
}
