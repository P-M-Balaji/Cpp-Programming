#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	int i, j;
	cin >> s;
	int n = s.size();
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			if (i == j || n - i - 1 == j)
				cout << s[j];
			else
				cout << " ";
		}
		cout << "\n";
	}
	return 0;
}
