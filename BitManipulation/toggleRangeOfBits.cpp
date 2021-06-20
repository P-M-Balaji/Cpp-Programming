#include<bits/stdc++.h>
using namespace std;

int main(){
    int N,L,R;
    cin>>N>>L>>R;

    int ans = 0, n;
    n = floor(log2(N) + 1);
    for (int i = 1; i < L; i++)
    {
        if (N & (1 << i - 1))
            ans += (1 << i - 1);
    }
    for (int i = L; i <= R; i++)
    {
        if (!(N & (1 << i - 1)))
            ans += (1 << i - 1);
    }
    for (int i = R + 1; i <= n; i++)
    {
        if (N & (1 << i - 1))
            ans += (1 << i - 1);
    }

    cout<<ans;

}