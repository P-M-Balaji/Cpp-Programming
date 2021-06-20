#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
    
    for(int &i:arr) cin>>i;
    int x=0;
    for(int i:arr) x=x^i;
    int pos = floor(log2(x)+1);

    int a1=0,a2=0;

    for(int i:arr){
        if(i &(1<<(pos-1)))
            a1^=i;
        else
            a2^=i;
    }
    cout<<a1<<" "<<a2;
    return 0;
}