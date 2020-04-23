#include <bits/stdc++.h>

using namespace std;

int main()
{
    int strength, n, counter=0;
    vector<pair<int, int>> input;
    cin >> strength >> n;
    for(int i=0; i<n; i++)
    {
        int dragon, bounse;
        cin >> dragon >> bounse;
        input.push_back(make_pair(dragon, bounse));
    }
    sort(input.begin(),input.end());
    for(int i=0; i<n; i++)
    {
        if(strength>input[i].first)
        {
            strength+=input[i].second;
            counter++;
        }
        else break;
    }
    if(counter == n) cout << "YES" << endl;
    else cout << "NO" << endl;
    return 0;
}