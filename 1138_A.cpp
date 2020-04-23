#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int food, temp;
    int a = 0, b = 1, maximum = 0;
    for(int i=0; i<num; i++)
    {
        cin >> food;
        if(i > 0)
        {
            if(temp == food)
            {
                b++;
            }
            else
            {
                a = b;
                b = 1;
            }
        }
        temp = food;
        maximum = max(maximum, min(a,b)*2);
    }
    cout << maximum;
}
