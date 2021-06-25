#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int factorial[10000] = {0}, size = 1, carry = 0, product, q = 2;
    factorial[0] = 1;
    while (q <= n)
    {
        for (int i = 0; i < size; i++)
        {
            product = factorial[i] * q + carry;
            factorial[i] = product % 10;
            carry = product / 10;
        }

        while (carry)
        {
            factorial[size++] = carry % 10;
            carry = carry / 10;
        }
        q++;
    }

    for (int i = size - 1; i >= 0; i--)
        cout << factorial[i];

    return 0;
}
