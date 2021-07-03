#include<bits/stdc++.h>
using namespace std;

void reverse(string str){
    if(str.length()==0){
        return;
    }

    string rev = str.substr(1);
    reverse(rev);
    cout<<str[0];
}

int main(){
    string s;
    cin >>s;
    reverse(s);
    return 0;
}