#include <iostream>
using namespace std;

int main()
{
    int n, q, i, j;
    cin >> n >> q;
    int *arr[n];
    for (i = 0; i < n; i++)
    {
        int k;
        cin >> k;
        arr[i] = new int[k];
        for (j = 0; j < k; j++)
            cin >> arr[i][j];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
        cout << arr[a][b] << endl;
    }
    return 0;
}
