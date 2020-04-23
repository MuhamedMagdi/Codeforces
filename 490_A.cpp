#include <bits/stdc++.h>

using namespace std;

int main()
{
    int holder, one=0, two=0, three=0, num;
    vector<int> ones, twos, threes;
    cin >> num;
    for(int i=1; i<=num; i++)
    {
        cin >> holder;
        switch(holder)
        {
        case 1:
            one++;
            ones.push_back(i);
            break;
        case 2:
            two++;
            twos.push_back(i);
            break;
        case 3:
            three++;
            threes.push_back(i);
            break;
        }
    }
    int m = min(one, min(two, three));
    cout << m << endl;
    if(m)
    {
        for(int i=0; i<m; i++)
        {
            cout << ones[i] << " " << twos[i] << " " << threes[i] << endl;
        }
    }
    return 0;
}
