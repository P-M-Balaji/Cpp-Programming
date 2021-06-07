#include<bits/stdc++.h>
using namespace  std;

int main(){
    int n; 
    cin>>n;
    int arr[n];

    for(int i=0;i<n;i++)
        cin>>arr[i];

    int total = 1<<n;
    for(int k=1;k<total;k++){
        for(int i=0;i<n;i++){
            if(k&(1<<i))
                cout<<arr[i]<<" ";
        }
        cout<<endl;
    }
}
