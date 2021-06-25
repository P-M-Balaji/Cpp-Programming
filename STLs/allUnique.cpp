#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str; cin>>str;
    set<char> s(str.begin(),str.end());

    str.length()==s.size() ? cout<<"Yes":cout<<"No";
    return 0;
}