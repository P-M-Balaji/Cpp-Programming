#include <bits/stdc++.h>
using namespace std;

//Input Format:a1b2c3
//Output Format:abbccc
//Constrait:0<=Number<=999

int main()
{
    string s;
    int i, count;
    cin >> s;
    for (i = 0; i < s.length(); i++)
    {
        count = 0;
        if (isalpha(s[i]))
        {
            if (isdigit(s[i + 1]) && isdigit(s[i + 2]) && isdigit(s[i + 3]))
                count = ((s[i + 1] - '0') * 100) + ((s[i + 2] - '0') * 10) + (s[i + 3] - '0');
            else if (isdigit(s[i + 1]) && isdigit(s[i + 2]))
                count = ((s[i + 1] - '0') * 10) + (s[i + 2] - '0');
            else
                count = s[i + 1] - '0';
        }
        for (int j = 0; j < count; j++)
            cout << s[i];
    }
    return 0;
}
