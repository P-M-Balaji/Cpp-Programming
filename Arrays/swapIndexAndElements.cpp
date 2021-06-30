#include <iostream>
using namespace std;

//Input Format
// 5
//4 2 0 1 3 
//Output Format
//2 3 1 4 0
int main ()
{
    int n;
    cin >> n;
    int a[n];
    for(int i=0;i<n;i++)
        cin >> a[i];
    int indx;
    for(int i=0;i<n;i++)
        a[a[i] % n] += i * n;
    
    for(int i=0;i<n;i++)
        a[i] /= n;
    
    for(int i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
