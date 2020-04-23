#include <bits/stdc++.h>

using namespace std;

int main()
{
    char keyboard[3][10] = {{'q', 'w', 'e', 'r', 't', 'y', 'u', 'i', 'o', 'p'},
                            {'a', 's', 'd', 'f', 'g', 'h', 'j', 'k', 'l', ';'},
                            {'z', 'x', 'c', 'v', 'b', 'n', 'm', ',', '.', '/'}};
    string flag, text;
    cin >> flag >> text;
    for(int i=0; i<text.length(); i++)
    {
        for(int j=0; j<3; j++)
        {
            for(int k=0; k<10; k++)
            {
                if(text[i] == keyboard[j][k])
                {
                    if(flag == "R")
                    {
                        cout << keyboard[j][k-1];
                    }
                    else
                    {
                        cout << keyboard[j][k+1];
                    }
                }
            }
        }
    }
    cout << endl;
    return 0;
}
