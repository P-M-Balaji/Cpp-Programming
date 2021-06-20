#include<bits/stdc++.h>
using namespace std;

//Nearest number greater to N that differs by 1bit. 
int main(){
    int n;
    cin>>n;
    cout<<(n|(n+1));
    return 0;
}