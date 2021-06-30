#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> spiralMatrix(int r, int c)
{

    vector<vector<int>> matrix(r);
    int num = 1;

    for (int i = 0; i < r; i++)
    {
        matrix[i].assign(c, 0);
        for (int j = 0; j < c; j++)
            matrix[i][j] = 0;
    }

    int T = 0, D = r - 1, R = c - 1, L = 0;
    int dir = 0;

    while (L <= R && T <= D)
    {
        if (dir == 0)
        {
            for (int i = L; i <= R; i++)
                matrix[T][i] = num++;
            T++;
        }
        else if (dir == 1)
        {
            for (int i = T; i <= D; i++)
                matrix[i][R] = num++;
            R--;
        }
        else if (dir == 2)
        {
            for (int i = R; i >= L; i--)
                matrix[D][i] = num++;
            D--;
        }
        else if (dir == 3)
        {
            for (int i = D; i >= T; i--)
                matrix[i][L] = num++;
            L++;
        }
        dir = (++dir) % 4;
    }

    return matrix;
}

int main()
{
    int r, c;
    cin >> r >> c;

    vector<vector<int>> result = spiralMatrix(r, c);

    for (auto i : result)
    {
        for (auto j : i)
            cout << j << " ";
        cout << endl;
    }
    return 0;
}
