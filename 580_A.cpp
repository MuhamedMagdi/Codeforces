#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, holder, checker=0, counter=0, answer=0;
    cin >> n;
    for(int i=0; i<n; i++)
    {
        cin >> holder;
        if(holder >= checker)
        {
            counter++;
        }
        else
        {
            if(answer <= counter)
            {
                answer = counter;
                counter = 1;
            }
            else
            {
            counter=1;
            }
        }
        checker = holder;
    }
    if(counter >= answer) cout << counter;
    else cout << answer << endl;
    return 0;
}
