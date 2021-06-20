#include<bits/stdc++.h>
using namespace  std;

int main(){
    int n; 
    cin>>n;
    
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    int k;
    cin>>k;

    int total = 1<<n;
    for(int j=1;j<total;j++){
        if(__builtin_popcount(j)==k){
            for(int i=0;i<n;i++){
                if(j&(1<<i))
                    cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}