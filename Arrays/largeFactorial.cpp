#include <bits/stdc++.h>
using namespace std;

vector<long long> factorial(vector<long long> a, int n)
{
    int MAX = 1e5;
    long long fac[MAX + 1], mod = 1e9 + 7;
    fac[0] = 1;
    for (long long i = 1; i <= MAX; i++)
    {
        fac[i] = (fac[i - 1] % mod * i) % mod;
    }

    vector<long long> ans(n);
    for (int i = 0; i < n; i++)
    {
        ans[i] = fac[a[i]];
    }
    return ans;
}

int main(){
    long long n;
    cin>>n;
    vector<long long> a(n);
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<long long> res = factorial(a, n);
    for (long long i = 0; i < n; i++)
        cout << res[i] << " ";

    return 0;
}