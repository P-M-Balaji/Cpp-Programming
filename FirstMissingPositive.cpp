#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++)
        cin>>arr[i];

    for (int i = 0; i < n; i++){
        int correctPos = arr[i] - 1;
        while (1 <= arr[i] && arr[i] <= n && arr[i] != arr[correctPos])
        {
            arr[i] = arr[i] + arr[correctPos];
            arr[correctPos] = arr[i] - arr[correctPos];
            arr[i] = arr[i] - arr[correctPos];
            correctPos = arr[i] - 1;
        }
    }

    for (int i = 0; i < n; i++){
        if(i+1 != arr[i]){
            cout<<i+1;
            break;
        }
    }
    return 0;
}