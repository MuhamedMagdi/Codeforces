#include <iostream>

using namespace std;

int main()
{
    int x, y, z, holder[6];
    int maximum = 0;
    cin >> x >> y >> z;
    holder[0] = x + y + z;
    holder[1] = (x + y) * z;
    holder[2] = x * (y + z);
    holder[3] = x * y * z;
    holder[4] = x + y * z;
    holder[5] = x * y + z;
    for(int i=0; i<6; i++)
    {
        if(holder[i] > maximum)
        {
            maximum = holder[i];
        }
    }
    cout << maximum;
    return 0;
}
