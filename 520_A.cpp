#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<char> word;
    for(int i=0; i<n; i++)
    {
        char holder;
        cin >> holder;
        word.push_back(tolower(holder));
    }
    sort(word.begin(), word.end());

    for(int i=1; i<n; i++)
    {
        if(word[i]==word[i-1])
        {
            word.erase(word.begin()+i);
            n--;
            i--;
        }
    }
    word.shrink_to_fit();
    if(word.size()==26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}