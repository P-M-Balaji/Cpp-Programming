#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    int canReach(int A[], int N)
    {
        int rechable = 0;
        for (int i = 0; i < N; i++)
        {
            if (rechable < i)
                return 0;
            rechable = max(rechable, i + A[i]);
        }
        return 1;
    }
};

int main()
{
    int N;
    cin >> N;

    int A[N];

    for (int i = 0; i < N; i++)
        cin >> A[i];

    Solution ob;
    cout << ob.canReach(A, N) << endl;
    return 0;
}