#include <bits/stdc++.h>

using namespace std;

int main()
{
    int r, c, holder, counter=0, rows=0,columns=0;
    cin >> r >> c;
    char cake[r][c];
    for(int i=0; i<r; i++)
    {
        holder=0;
        for(int j=0; j<c; j++)
        {
            cin >> cake[i][j];
            if(cake[i][j] == '.')
            {
                holder++;
            }
        }
        if(holder == c)
        {
            counter+=holder;
            rows++;
        }
    }
    for(int i=0; i<c; i++)
    {
        holder=0;
        for(int j=0; j<r; j++)
        {
        if(cake[j][i] == '.')
                {
                    holder++;
                }
        }
        if(holder == r)
        {
            counter+=holder;
            columns++;
        }
    }
    counter -= rows*columns ;
    cout << counter << endl;
    return 0;
}