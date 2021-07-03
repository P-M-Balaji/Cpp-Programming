#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n){
    return n && (!(n & (n - 1)));
}

int main()
{
    int n, count = 0;
    cin >> n; 
    if (isPowerOf2(n))
        cout << "Yes";
    else
        cout<<"no";
    return 0;
}