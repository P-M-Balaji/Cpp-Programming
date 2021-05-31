#include <iostream>
using namespace std;
int main ()
{
    int n=5;
    int a[n] = {4,2,0,1,3}; // 2 3 1 4 0
    int indx;
    for(int i=0;i<n;i++)
        a[a[i] % n] += i * n;
    
    for(int i=0;i<n;i++)
        a[i] /= n;
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
