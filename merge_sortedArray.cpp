#include<bits/stdc++.h>
using namespace std;

int main(){
    vector <int> a1={1,3,5,7,8,9,11},a2={2,4,5,6,8,10,12,14,16},a3;
    int n1=a1.size(),n2 = a2.size(),i=0,j=0;
    while (i < n1 && j < n2){
        if (a1[i] < a2[j])
            a3.push_back(a1[i++]);
        else if (a1[i] > a2[j])
            a3.push_back(a2[j++]);
        else{
            a3.push_back(a1[i]);
            i++;
            j++;
        }
    }
    while(i<n1){
        a3.push_back(a1[i]);
        i++;
    }
    while (j < n2)
    {
        a3.push_back(a2[j]);
        j++;
    }
    for(i = 0; i < a3.size(); i++)
        cout<<a3[i]<<" ";
    return 0;
}