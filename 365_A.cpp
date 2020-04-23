#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m,counter=0;
    cin >> n >> m;
    for(int i=0; i<n; i++)
    {
        set<int> number;
        set<int>::iterator it;
        int c=0, check=0;
        string holder;
        cin >> holder;
        for(int j=0; j<holder.size(); j++)
        {
            number.insert(holder[j]-'0');
        }
        for(it=number.begin(); it!=number.end(); ++it)
        {
            if(*it==c)
            {
                check++;
                if(check==m+1)
                {
                    counter++;
                    break;
                }
                c++;
            }
            else
            {
                break;
            }
        }
    }
    cout << counter << endl;
    return 0;
}