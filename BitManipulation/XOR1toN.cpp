#include <bits/stdc++.h>
using namespace std;

long int getXOR(long int n){
    switch(n%4){
        case 0:return n;
        case 1:return 1;
        case 2:return n+1;
        case 3:return 0;
    }
}

int main()
{
    long int n;
    cin >> n;
    cout << getXOR(n);
    return 0;
}