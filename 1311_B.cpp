#include <bits/stdc++.h>

using namespace std;

vector <int> a, p;

void sorting(){
    int holder;
    bool flag = false;
    if(is_sorted(a.begin(), a.end()))
    {
        cout << "YES" << endl;
        return;
    }
    for(int i=0; i<p.size(); i++)
    {
        //cout << a[p[i]-1] << " - " << a[p[i]] << endl;
        if(a[p[i]-1] > a[p[i]])
        {
            flag = true;
            holder = a[p[i]];
            a[p[i]] = a[p[i]-1];
            a[p[i]-1] = holder;
        }
    }
    //cout << "-----------" << endl;
    /*for(int i=0; i<a.size(); i++)
    {
        cout << a[i] << " ";
    }*/
    //cout << endl << "-----------" << endl;
    if(!flag)
    {
        cout << "NO" << endl;
        return;
    }
    sorting();
}

int main()
{
    int t, n, s, num;
    cin >> t;
    for(int i=0; i<t; i++)
    {
        cin >> n >> s;
        for(int j=0; j<n; j++)
        {
            cin >> num;
            a.push_back(num);
        }
        for(int j=0; j<s; j++)
        {
            cin >> num;
            p.push_back(num);
        }
        sort(p.begin(), p.end());
        sorting();
        a.clear();
        p.clear();
    }
    return 0;
}

