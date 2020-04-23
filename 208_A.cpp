#include <bits/stdc++.h>

using namespace std;

int main()
{
    int space=0;
    vector<char> word;
    string holder;
    cin >> holder;
    for(int i=0; i<holder.size(); i++)
    {
        word.push_back(holder[i]);
    }
    for(int i=0; i<word.size(); i++)
    {
        int s = word.size();
        if(word[i]=='W' && i<s-2)
        {
            if(word[i+1]=='U')
            {
                if(word[i+2]=='B')
                {
                    if(i!=0 && space==0)
                    {
                        if(i+3 != word.size())
                        {
                            word.erase(word.begin()+i+1, word.begin()+i+3);
                            word[i] = ' ';
                        }
                        else
                        {
                            word.erase(word.begin()+i, word.begin()+i+3);
                        }
                        space++;
                    }
                    else
                    {
                        word.erase(word.begin()+i, word.begin()+i+3);
                        i--;
                    }
                }
                else
                {
                    space=0;
                }
            }
            else
            {
                space=0;
            }
        }
        else
        {
            space=0;
        }
    }
    word.shrink_to_fit();
    for(int i=0; i<word.size(); i++)
    {
        cout << word[i];
    }
    cout << endl;
    return 0;
}