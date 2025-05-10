#include <bits/stdc++.h>

using namespace std;

long int decimalToBinary(int decimal_number)
{
    if (decimal_number<2)
    {
        return decimal_number%2;
    }
    return decimalToBinary(decimal_number/2) * 10 + decimal_number%2;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout<<decimalToBinary(10);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}