#include <bits/stdc++.h>

using namespace std;

int main()
{
    int y, w, numerator, denominator;
    cin >> y >> w;
    numerator = 6-max(y,w)+1;
    if (numerator%6 ==0)
        cout << "1/1" << endl;
    else if (numerator%4 ==0)
        cout << "2/3" << endl;
    else if (numerator%3 == 0)
        cout << "1/2" << endl;
    else if (numerator%2 == 0)
        cout << "1/3" << endl;
    else
        cout << numerator << "/6" << endl;
    return 0;
}