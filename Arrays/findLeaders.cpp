#include<bits/stdc++.h>
using namespace std;

vector<int> leaders(int a[], int n)
{
    vector<int> ans;
    int max = a[n - 1];
    ans.push_back(max);
    for (int i = n - 2; i >= 0; i--)
    {
        if (a[i] >= max)
        {
            max = a[i];
            ans.push_back(max);
        }
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main(){
    long long n;
    cin >> n;
    int a[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> v = leaders(a, n);

    for (auto i:v)
        cout << i << " ";

    cout << endl;
}