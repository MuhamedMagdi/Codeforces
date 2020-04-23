#include <iostream>
#include <string>
#include <vector>

using namespace std;

int length = 0;
int convertToInt(char number[]);

int main()
{
    int noluckey = 0;
    string holder;
    cin >> holder;
    length = holder.length();
    char almostlucky[length];
    for(int i=0; i<length; i++)
    {
        almostlucky[i]=holder.at(i);
        if(holder.at(i) == '4' || holder.at(i) == '7')
        {
            noluckey++;
        }
    }
    int lucky = convertToInt(almostlucky);
    if(noluckey == length)
    {
        cout << "YES";
    }
    else if(lucky%4 == 0 || lucky%7 == 0 || lucky%47 == 0 || lucky%74 == 0 || lucky%447 == 0|| lucky%474 == 0 || lucky%477 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}

int convertToInt(char number[])
{
    int integer = 0;
    int total = 0;
    int inc = 1;
    for(int i=length-1; i>=0; i--)
    {
        integer = number[i] - 48;
        total = total + (integer * inc);
        inc *= 10;
    }
    return total;
}
