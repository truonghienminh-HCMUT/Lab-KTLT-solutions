#include <bits/stdc++.h>

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
    for (int i = 3; i*i <= n; i+=2)
    {
        if (n%i==0)
        {
            return false;
        }
        
    }
    return true;
}
int sum(int n)
{
    int res = 0;
    while (n>9)
    {
        res += n%10;
        n=n/10;
    }
    res += n;
    return res;
}
bool isSpecialNumber(int n) 
{
    return isPrime(n) && isPrime(sum(n));    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    cout <<isPrime(n)<<" "<<sum(n)<<" "<< isSpecialNumber(n);
    	
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}