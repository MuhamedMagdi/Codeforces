#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int digit;
    string num;
    int zero = 0;
    int one = 0;
    int counter = 0;
    cin >> digit;
    cin >> num;
    for(int i=0; i<digit; i++)
    {
        if(num.at(i) == '1')
        {
            one++;
        }
        else
        {
            zero++;
        }
    }
    cout << abs(one - zero);
    return 0;
}