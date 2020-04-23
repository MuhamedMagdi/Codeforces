#include <iostream>
#include <math.h>

using namespace std;

int convertToInt(char com);

int main()
{
    int steps = 0;
    int num, moves;
    string lockerhoalder, goalhoalder;
    cin >> num;
    cin >> lockerhoalder;
    cin >> goalhoalder;
    int locker[num], goal[num];

    for(int i=0; i<num; i++)
    {
        locker[i] = convertToInt(lockerhoalder.at(i));
        goal[i] = convertToInt(goalhoalder.at(i));
    }
    for(int i=0; i<num; i++)
    {
        if(abs(locker[i] - goal[i]) <= 4)
        {
            steps = steps + abs(locker[i] - goal[i]);
        }
        else
        {
            steps = steps + abs(abs(goal[i] - locker[i]) - 10);
        }
    }
    cout << steps;
    return 0;
}

int convertToInt(char com)
{
    int integer = 0;
    integer = com - 48;
    return integer;
}