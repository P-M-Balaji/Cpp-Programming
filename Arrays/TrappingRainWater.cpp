#include <bits/stdc++.h>
using namespace std;

class Solution
{

// Function to find the trapped water between the blocks.
public:
    int trappingWater(int arr[], int n)
    {
        int l_max = arr[0], r_max = arr[n - 1];
        int trapped_water = 0;

        if (n < 3)
            return 0;

        int L = 1, R = n - 2;
        while (L <= R)
        {
            int waterlevel = min(l_max, r_max);

            if (waterlevel == l_max)
            {
                if (waterlevel > arr[L])
                    trapped_water += (waterlevel - arr[L++]);
                else
                    l_max = arr[L++];
            }

            else if (waterlevel == r_max)
            {
                if (waterlevel > arr[R])
                    trapped_water += (waterlevel - arr[R--]);
                else
                    r_max = arr[R--];
            }
        }

        return trapped_water;
    }
};

int main()
{
    int n;
    cin >> n;
    int a[n];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];
    
    Solution obj;
    cout << obj.trappingWater(a, n) << endl;
    return 0;
}