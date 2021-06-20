#include<bits/stdc++.h>
using namespace std;

//Function that finds in how many ways a can be converted to b by ORing
int getvalue(int a,int b){
    int res=1;
    while(a&&b){
        if(a&1==1){
            if(b&1==1)
                res*=2;
            else
                return 0;
        }
        a=a>>1;
        b=b>>1;
    }
    return res;
}

int main(){
    int a, b;
    cin >> a >> b;
    cout << getvalue(a, b);
    return 0;
}