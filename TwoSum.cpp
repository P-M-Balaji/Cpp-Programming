#include <bits/stdc++.h>

using namespace std;

void findPairs(int arr[], int arr_size, int sum)
{
    unordered_set<int> s;
    for (int i = 0; i < arr_size; i++)
    {
        int temp = sum - arr[i];

        if (s.find(temp) != s.end())
            cout << temp << " " << arr[i] << endl;

        s.insert(arr[i]);
    }
}

int main()
{
    int A[] = {1, 4, 7, 6, 10, 9};
    int n = 16;
    int arr_size = sizeof(A) / sizeof(A[0]);

    findPairs(A, arr_size, n);

    return 0;
}