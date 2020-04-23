#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, c;
    cin >> n >> c;
    int arr[2*n+1];
    bool peak[2*n+1]={0};
    for(int i=0; i<2*n+1; i++)
    {
        if(!i)
        {
            cin >> arr[i];
        }
        else
        {
            cin >> arr[i];
            if(arr[i]>arr[i-1]+1)
            {
                if(peak[i-1] == true)
                {
                    peak[i-1] = false;
                }
                peak[i] = true;
            }
            if(arr[i]+1 == arr[i-1])
            {
                if(peak[i-1] == true)
                {
                    peak[i-1] = false;
                }
                peak[i] = false;
            }
        }
    }
    for(int i=0; i<2*n+1; i++)
    {
        if(peak[i] && c > 0)
        {
            cout << arr[i]-1 << " ";
            c--;
        }
        else
        {
            cout << arr[i] << " ";
        }
    }
    cout << endl;
    return 0;
}
