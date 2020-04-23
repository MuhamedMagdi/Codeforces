#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
  string word;
    cin >> word;
    word.at(0) = toupper(word.at(0));
    cout << word;
    return 0;
}