#include <bits/stdc++.h> 
 
using namespace std; 
 
int main() { 
        set<int> c; 
        int h; 
        for(int i=0; i<4; i++) 
        { 
                cin >> h; 
                c.insert(h); 
        } 
        cout << 4-c.size() << endl; 
        return 0; 
}