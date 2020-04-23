#include <iostream>
#include <vector>
#include <string>
#include <map>

using namespace std;

int main()
{
    int num;
    cin >> num;
    map <string,int> chat;
    map<int, string> people;
    int maximum = 0;
    for(int i=0; i<num; i++)
    {
        string holder;
        cin >> holder;
        chat[holder] = i;
    }
    for(auto& x: chat)
    {
        string holder = x.first;
        int number = x.second;
        if(number > maximum)
        {
            maximum = number;
        }
        people[number] = holder;
    }
    for(int i=maximum; i>=0; i--)
    {
        if(!people[i].empty())
        {
            cout << people[i] << endl;
        }
    }
}
