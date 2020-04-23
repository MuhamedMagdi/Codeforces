#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,lapf, laps;
    vector< pair<int,int> > lap;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> lapf >> laps;
        lap.push_back(make_pair(lapf, laps));
    }
    sort(lap.begin(), lap.end());
    for(int i=1; i<n; i++)
    {
        if(lap[i].second < lap[i-1].second)
        {
            cout << "Happy Alex" << endl;
            return 0;
        }
    }
    cout << "Poor Alex" << endl;
    return 0;
}
