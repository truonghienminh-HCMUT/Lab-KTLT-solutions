#include <bits/stdc++.h>

using namespace std;

bool checkElementsUniqueness(int* arr, int n)
{
    bool check[1002];
    memset(check,0,sizeof(check));
    for (int i = 0; i < n; i++)
    {
        if(check[arr[i]])
        {
            return false;
        }
        check[arr[i]] = true;
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin >> n;
    int* arr = new int[n];
    for(int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    cout << checkElementsUniqueness(arr, n);
    delete[] arr;
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}