#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    map<string, int> team;
    map<string, int>::iterator it;
    for(int i=0; i<n; i++)
    {
        string holder;
        cin >> holder;
        team[holder]++;
    }
    it=team.begin();
    if(team.size()==1)
    {
        cout << it->first << endl;
    }
    else
    {
        if(it->second > (++it)-> second)
        {
            cout << (--it) -> first << endl;
        }
        else
        {
            cout << it -> first << endl;
        }
    }
    return 0;
}