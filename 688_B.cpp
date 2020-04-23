#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num, reversed;
    cin >> num;
    reversed=num;
    reverse(num.begin(), num.end());
    cout << reversed << num << endl;
    return 0;
}
