#include <bits/stdc++.h>

using namespace std;

int main()
{
    int test, n, m, holder;
    cin >> test;
    for(int i=0; i<test; i++)
    {
        int ch[26] = {0};
        cin >> n >> m;
        char s[n];
        vector<int> num;
        for(int j=0; j<n; j++)
        {
            cin >> s[j];
            s[j];
        }
        for(int j=0; j<m; j++)
        {
            cin >> holder;
            num.push_back(holder-1);
        }
        sort(num.begin(), num.end());
        for(int j=0; j<n; j++)
        {
            int siz = lower_bound(num.begin(), num.end(), j) - num.begin();
            //if(j <= num[siz])
            //{
                if(j > num[num.size()-1])
                {
                    ch[s[j]-'a']++;
                    continue;
                }
                ch[s[j]-'a'] += m-siz+1;
                //cout << ch[s[j]-'a'] << endl;
            //}

        }
        for(int j=0; j<26; j++)
        {
            cout << ch[j] << " ";
        }
        cout << endl;
    }
    return 0;
}
