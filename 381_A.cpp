#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, cs=0, cd=0, order=0;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin >> arr[i];
    }
    int l = n-1, r=0;
    while(r<=l)
    {
        order%=2;
        if(arr[l] >= arr[r])
        {
            if(!order) cs+=arr[l];
            else cd+=arr[l];
            l--;
        }
        else
        {
            if(!order) cs+=arr[r];
            else cd+=arr[r];
            r++;
        }
        order++;
    }
    cout << cs << " " << cd << endl;
    return 0;
}
