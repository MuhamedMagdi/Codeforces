#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num, h, height = 0, width = 0;
    cin >> num >> h;
    for(int i=0; i<num; i++)
    {
        cin >> height;
        if(height <= h)
        {
            width++;
        }
        else
        {
            width += 2;
        }
    }
    cout << width;
}