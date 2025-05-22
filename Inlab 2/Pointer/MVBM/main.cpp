#include <bits/stdc++.h>

using namespace std;

int calcSum(int *ptr, int n)
{
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum+=*(ptr+i);
    }
    return sum;
}
void add(int *ptr, int n, int k)
{
    *(ptr+n) = k;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[100] = {15, 8, -14, 13, -17, -12, 10, -15, -9, 4, 1, 0, 16, -11, -5, 19, 17, -13, -18, -4, 0};
    int n = 22;
    int k = -100;
    add(arr, n, k);
    cout << arr[n];
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}