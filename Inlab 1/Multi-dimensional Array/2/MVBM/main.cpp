#include <bits/stdc++.h>
#include<math.h>
using namespace std;
bool isPrime(int n)
{
    if (n<=1)
    {
        return false;
    }
    if (n==2)
    {
        return true;
    }
    if (n%2==0)
    {
        return false;
    }
    
    for (int i = 3; i*i < n; i+=2)
    {
        if (n%i==0)
        {
            return false;
        }
    }
    return true;
}

int primeColumns(int arr[][1000], int row, int col) 
{
    int res = 0,sum;
    for (int i = 0; i < col; i++)
    {
        sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum+=arr[j][i];
        }
        // cout<<sum<<endl;
        if (isPrime(sum))
        {
            res++;
        }
    }
    return res;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[][1000] = {{-64,-28,-3,64},{-56,90,57,-31}};
    cout << primeColumns(arr,2,4);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}