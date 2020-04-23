#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    string board;
    int white = 0;
    int black = 0;
    map <char, int> pieces;
    pieces['Q'] = 9; pieces['q'] = 9;
    pieces['R'] = 5; pieces['r'] = 5;
    pieces['B'] = 3; pieces['b'] = 3;
    pieces['N'] = 3; pieces['n'] = 3;
    pieces['P'] = 1; pieces['p'] = 1;
    pieces['K'] = 0; pieces['k'] = 0;
    for(int i=0; i<8; i++)
    {
        cin >> board;
        for(int j=0; j<8; j++)
        {
            if(isupper(board.at(j)))
            {
                white = white + pieces[board.at(j)];
            }
            else if(islower(board.at(j)))
            {
                black = black + pieces[board.at(j)];
            }
        }
    }
    if(white > black)
    {
        cout << "White";
    }
    else if (white < black)
    {
        cout << "Black";
    }
    else
    {
        cout << "Draw";
    }
    return 0;
}
