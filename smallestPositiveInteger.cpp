#include <bits/stdc++.h>
using namespace std;

// Smallest Positive Integer that can not be represented as Sum of elements in an array
class Solution
{
public:
    long long smallestpositive(vector<long long> array, int n)
    {
        long long ans = 1;
        sort(array.begin(), array.end());
        for (auto i : array)
        {
            if (ans < i)
                return ans;
            ans += i;
        }
        return ans;
    }
};

int main()
{
    int n;
    cin >> n;
    vector<long long> array(n);
    for (int i = 0; i < n; ++i)
    {
        cin >> array[i];
    }
    Solution ob;
    cout << ob.smallestpositive(array, n) << "\n";
    
    return 0;
}
