#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[])
{
	int first, second;
	long long sum=0;
	cin >> first >> second;
	if(first>second)
	{
		swap(first,second);
	}
	for(int i=1; i<=first; ++i)
	{
		sum+=(second+i)/5 - i/5;
	}
	cout << sum << endl;
	return 0;
}