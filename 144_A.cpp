#include <iostream>

using namespace std;

int main()
{
    int num;
    int maximum = 0, minimum = 2147483647;
    int maxloca = 0, minloca = 0;
    int moves = 0;
    cin >> num;
    int soldier[num];
    for(int i=0; i<num; i++)
    {
        cin >> soldier[i];
        if(soldier[i] > maximum)
        {
            maximum = soldier[i];
            maxloca = i + 1;
        }
        if(soldier[i] <= minimum)
        {
            minimum = soldier[i];
            minloca = i + 1;
        }
    }
    if (minloca > maxloca)
    {
        moves = (num - minloca) + (maxloca - 1);
    }
    else
    {
        moves = ((num - minloca) + (maxloca - 1)) - 1;
    }
    cout << moves;
    return 0;
}
