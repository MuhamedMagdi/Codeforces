#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string word;
    string reversed;
    cin >> word;
    cin >> reversed;
    reverse(word.begin(), word.end());
    if(word == reversed)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
    return 0;
}
