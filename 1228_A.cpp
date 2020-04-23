#include <bits/stdc++.h>

using namespace std;

int main()
{
    int low, high, mid, len=1;
    bool flag=false;
    cin >> low >> high;
    mid = low-1;
    int n = high-low+1;
    int h = low;
    while (h/=10)
        len++;
    for(int i=0; i<n; i++)
    {
        mid++;
        stringstream ss;
        ss << mid;
        string holder = ss.str();
        set<char> answer;
        for(int j=0; j<holder.size(); j++)
        {
            answer.insert(holder[j]);
        }
        if(answer.size()>=len && holder.size()==answer.size() && mid>=low && mid<= high)
        {
            flag=true;
            break;
        }
    }
    if(flag)
    {
        cout << mid << endl;
    }
    else
    {
        cout << "-1" << endl;
    }
    return 0;
}
