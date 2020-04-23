#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int gift[num];
    int gifted[num];
    for(int i=0; i<num; i++)
    {
        cin >> gift[num];
        gifted[gift[num]-1] = i;
    }
    for(int i=0; i<num; i++)
    {
        cout << gifted[i]+1 << " ";
    }
    return 0;
}