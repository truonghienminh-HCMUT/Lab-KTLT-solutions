#include <bits/stdc++.h>

using namespace std;
//1
int recursiveSum(int arr[], int size) 
{
    if (size==1)
    {
        return arr[0];
    }
    return recursiveSum(arr+1,size-1) + arr[0];
}
//2
long int decimalToBinary(int decimal_number)
{
    if (decimal_number<2)
    {
        return decimal_number%2;
    }
    return decimalToBinary(decimal_number/2) * 10 + decimal_number%2;
}
//3
bool palindromeRecursion(string s)
{
    // BEGIN YOUR IMPLEMENTATION [1]    
    if (s.length()<2)
    {
        return true;
    }
    if (s[0] != s[s.size()-1])
    {
        return false;
    }
    return palindromeRecursion(s.substr(1,s.size()-2));
    // END YOUR IMPLEMENTATION [1]
}
bool palindrome(string s)
{
    for (int i = 0; i < s.size()/2; i++)
    {
        if (s[i] != s[s.size()-i-1])
        {
            return false;
        }
        
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int size = 9;
    cout << recursiveSum(arr, size);
    cout<<palindromeRecursion("abcddcba");
    cout<<palindrome("abcdedcba");
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}