#include <bits/stdc++.h>

using namespace std;

bool isPalindrome(const char* str) 
{
    int n = 0;
    while (str[n] != '\0'){
        n++;
    }
    for (int i = 0; i < n/2; i++)
    {
        if (str[i]!=str[n-i-1])
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
    cout<<isPalindrome("abcdcba");
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}