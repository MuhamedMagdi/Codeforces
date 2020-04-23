#include <iostream>

using namespace std;

int main()
{
    long long n, m, a;
    cin >> n >> m >> a;
    long long w = n/a;
    long long l = m/a;
    if(n%a != 0) w++;
    if(m%a != 0) l++;
    cout << w*l << endl;
    return 0;
}