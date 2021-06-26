#include <iostream>
using namespace std;

class Solution
{
public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n)
    {

        // Your code here
        if (n == 1)
            return 1;
        else if (n == 2)
            return -1;
        long long l_sum = 0, r_sum = 0, sum[n] = {0};
        sum[0] = a[0];
        for (int i = 1; i < n; i++)
        {
            sum[i] = sum[i - 1] + a[i];
        }

        for (int i = 1; i < n - 1; i++)
        {
            l_sum = sum[i] - a[i];
            r_sum = sum[n - 1] - sum[i];
            if (r_sum == l_sum)
                return i + 1;
        }
        return -1;
    }
};

int main()
{
    long long n;

    //taking input n
    cin >> n;
    long long a[n];

    //adding elements to the array
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    Solution ob;

    cout << ob.equilibriumPoint(a, n) << endl;
    return 0;
}