#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    long long findNth(long long N)
    {
        long long ans = 0;
        long long p = 1;
        long long n = N;
        while (n > 0)
        {
            ans += p * (n % 9);
            n = floor(n / 9);
            p *= 10;
        }
        return ans;
    }
};

int main()
{
    long long n, ans;
    cin >> n;
    Solution obj;
    ans = obj.findNth(n);
    cout << ans << endl; 
    return 0;
}
