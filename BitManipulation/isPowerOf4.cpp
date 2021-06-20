#include <bits/stdc++.h>
using namespace std;

bool isPowerOf4(int n)
{
    if (n <= 0)
        return 0;
    int count = 0;
    int k = floor(log2(n) + 1);
    while (n)
    {
        count++;
        n = n & (n - 1);
    }
    return (k & 1 == 1 && count == 1);
}

int main()
{
    int n, count = 0;
    cin >> n;
    if (isPowerOf4(n))
        cout << "Yes";
    else
        cout << "no";
    return 0;
}