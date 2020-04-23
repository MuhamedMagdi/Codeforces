#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    char color[7] = {'R', 'O', 'Y', 'G', 'B', 'I', 'V'};
    for(int i=0; i<num; i++)
    {
        if(i == 7)
        {
            i = 0;
            num -= 7;
        }
        if(num <= 3)
        {
            i += 3;
            num += 3;
        }
        cout << color[i];
    }
}