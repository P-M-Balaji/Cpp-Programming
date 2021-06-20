#include <bits/stdc++.h>
using namespace std;

bool isPowerOf2(int n){
    if(n<=0)
        return 0;
    int count = 0; 
    while(n){
        count++;
        n=n&(n-1);
    }
    return count==1;
}

int main()
{
    int n, count = 0;
    cin >> n; 
    if (isPowerOf2(n))
        cout << "Yes";
    else
        cout<<"no";
    return 0;
}