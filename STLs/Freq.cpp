#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v = {1,1,1,1,1,2,2,2,3,3,3,3,3,3,3,4,4,4,5,5};
    map<int,int> um={};

    for(auto i: v){
        if(um.find(i)!=um.end())
            um[i]++;
        else
            um[i] = 1;
    }

    for(auto x: um)
        cout<<x.first<<"=>"<<x.second<<endl;

    return 0;
}