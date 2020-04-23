#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int num;
    cin >> num;
    string username;
    map <string, int> id;
    for(int i=0; i<num; i++)
    {
        cin >> username;
        if(id[username] == 0)
        {
            cout << "OK" << endl;
            id[username]++;
        }
        else
        {
            cout << username << id[username] << endl;
            id[username]++;
        }
    }
    return 0;
}
