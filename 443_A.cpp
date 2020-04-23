#include <bits/stdc++.h>

using namespace std;

int main()
{
    int num;
    char letter, comma;
    set <char> dis;
    cin >> letter;
    while(true)
    {
        cin >> letter;
        if(letter == '}')
        {
            break;
        }
        else if(letter == ',')
        {
            continue;
        }
        dis.insert(letter);
    }
    cout << dis.size() << endl;
    return 0;
}
