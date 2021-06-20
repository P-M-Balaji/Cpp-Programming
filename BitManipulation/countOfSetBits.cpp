#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,count=0;
    cin>>n;
    while(n){
        count++;
        n=n&(n-1);
    }
    cout<<count;
    return 0; 
}