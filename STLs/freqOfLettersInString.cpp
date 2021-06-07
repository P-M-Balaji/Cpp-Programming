#include <bits/stdc++.h>
using namespace std;
int main()
{
    map<char, int> A;
    string s = "PythonProgramming";

    for (char c : s)
        A[c]++;

    for (auto x : A)
        cout << x.first << " - " << x.second << endl;

    return 0;
}