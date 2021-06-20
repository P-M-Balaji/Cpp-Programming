#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int pos = floor(log2(n) + 1);
    int m = 1 << (pos - 1);
    m = m | (m - 1);
    cout << (n ^ m);
    return 0;
}