#include <bits/stdc++.h>
using namespace std;

//Input Format
//7
//1 2 3 4 5 6 7
//Output Format
//7 1 6 2 5 3 4
void rearrange(long long *arr, int n)
{
    int min_index = 0;
    int max_index = n - 1;
    int max = arr[n - 1] + 1;
    for (int i = 0; i < n; i++)
    {
        if (!(i & 1))
        {
            arr[i] = (arr[max_index] % max) * max + arr[i];
            max_index--;   
        }
        else
        {
            arr[i] = (arr[min_index] % max) * max + arr[i];
            min_index++;
        }
    }

    for (int i = 0; i < n; i++)
        arr[i] /= max;

    return;
}

int main(){
    int n;
    cin >> n;
    long long int a[n];
    
    for (int i = 0; i < n; i++)
        cin >> a[i];

    rearrange(a, n);
    for (int i = 0; i < n; i++)
        cout << a[i] << " ";

    return 0;
}