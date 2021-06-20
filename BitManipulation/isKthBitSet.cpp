#include<iostream>
using namespace std;

// Function to check if Kth bit is set or not.
bool checkKthBit(int n, int k)
{
    // Your code here
    // It can be a one liner logic!! Think of it!!
    if ((n >> k) & 1)
        return 1;
    else
        return 0;
}

int main(){
    int n,k;
    cin>>n>>k;
    if (checkKthBit(n,k))
        cout<<"Yes";
    else
        cout<<"No";
        return 0;
}