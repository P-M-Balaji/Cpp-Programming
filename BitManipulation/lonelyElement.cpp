#include <iostream>
using namespace std;

int search(int A[], int N)
{
    //code
    for (int i = 1; i < N; i++)
        A[0] ^= A[i];

    return A[0];
}

int main()
{
    int a[5] = {1, 1, 2, 5, 5};
    cout << search(a, 5);
    return 0;
}