#include <bits/stdc++.h>

using namespace std;

long long s(long long st, long long ed)
{
    return ed*(ed+1)/2 - st*(st-1)/2;
}

int main()
{
    long long n, k;
    cin >> n >> k;
    k--; n--;
    if(n==0) cout << "0" << endl;
    else if(n<=k) cout << "1" << endl;
    else if(s(1, k) < n) cout << "-1" << endl;
    else
    {
        long long st=1, ed=k;
        long long sum;
        while(st<ed)
        {
            long long mid=(st+ed)/2;
            sum = s(mid, k);
            if(sum == n)
            {
                cout << k-mid+1 << endl;
                return 0;
            }
            else if(sum < n)
            {
                ed = mid;
            }
            else
            {
                st = mid+1;
            }
        }
        cout << k-st+2 << endl;
    }
    return 0;
}
