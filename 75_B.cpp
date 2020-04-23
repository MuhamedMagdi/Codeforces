#include <bits/stdc++.h>

using namespace std;

int main()
{
    string name, status;
    cin >> name;
    int n;
    cin >> n;
    getline(cin, status);
    map<string, int> face;
    multimap<int, string> out;
    for(int i=n; i>0; i--)
    {
        string q,w,o,a;
        stringstream s;
        getline(cin, status);
        s << status;
        s >> q >> w >> o >> a;
        if(o == "on")
        {
            o=a;
        }
        o.erase(o.length()-2, o.length());
        if(q == name)
        {
            if(w== "posted")
            {
                face[o]+=15;
            }
            else if(w== "commented")
            {
                face[o]+=10;
            }
            else if(w== "likes")
            {
                face[o]+=5;
            }
        }
        else if(o == name)
        {
            if(w== "posted")
            {
                face[q]+=15;
            }
            else if(w== "commented")
            {
                face[q]+=10;
            }
            else if(w== "likes")
            {
                face[q]+=5;
            }
        }
        else
        {
            face[q]+=0;
            face[o]+=0;
        }
    }
    for(auto it=face.begin(); it != face.end(); ++it)
    {
        out.insert(pair<int, string>(it->second, it->first));
    }
    multimap <int, string> :: reverse_iterator it;
    int key;
    vector<string> output;
    for (it = out.rbegin(); it != out.rend(); ++it)
    {
        if(it == out.rbegin())
        {
            key = it->first;
            output.push_back(it->second);
        }
        else
        {
            if(key == it->first)
            {
                output.push_back(it->second);
            }
            else
            {
                sort(output.begin(), output.end());
                for(int i=0; i<output.size(); i++)
                {
                    cout << output[i] << endl;
                }
                output.clear();
                key = it->first;
                output.push_back(it->second);
            }
        }
    }
    sort(output.begin(), output.end());
    for(int i=0; i<output.size(); i++)
    {
        cout << output[i] << endl;
    }
    return 0;
}
