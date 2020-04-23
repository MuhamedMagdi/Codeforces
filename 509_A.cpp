#include <iostream>

using namespace std;

int main()
{
    int num;
    cin >> num;
    int table[num][num];
    for(int i=0; i<num; i++)
    {
        table[0][i] = 1;
        table[i][0] = 1;
    }
    for(int row=1; row<num; row++)
    {
        for(int col=1; col<num; col++)
        {
            table[row][col] = table[row-1][col] + table[row][col-1];
        }
    }
    cout << table[num-1][num-1];
    return 0;
}
