#include <bits/stdc++.h>
using namespace std;

class Solution
{
public:
    //Function to return a list of integers denoting spiral traversal of matrix.
    vector<int> spirallyTraverse(vector<vector<int>> matrix, int r, int c)
    {
        int T = 0, D = r - 1, R = c - 1, L = 0;
        int dir = 0;
        vector<int> ans;
        while (L <= R && T <= D)
        {
            if (dir == 0)
            {
                for (int i = L; i <= R; i++)
                    ans.push_back(matrix[T][i]);
                T++;
            }
            else if (dir == 1)
            {
                for (int i = T; i <= D; i++)
                    ans.push_back(matrix[i][R]);
                R--;
            }
            else if (dir == 2)
            {
                for (int i = R; i >= L; i--)
                    ans.push_back(matrix[D][i]);
                D--;
            }
            else if (dir == 3)
            {
                for (int i = D; i >= T; i--)
                    ans.push_back(matrix[i][L]);
                L++;
            }
            dir = (++dir) % 4;
        }

        return ans;
    }
};

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int r, c;
        cin >> r >> c;
        vector<vector<int>> matrix(r);

        for (int i = 0; i < r; i++)
        {
            matrix[i].assign(c, 0);
            for (int j = 0; j < c; j++)
            {
                cin >> matrix[i][j];
            }
        }

        Solution ob;
        vector<int> result = ob.spirallyTraverse(matrix, r, c);
        for (int i = 0; i < result.size(); ++i)
            cout << result[i] << " ";
        cout << endl;
    }
    return 0;
}