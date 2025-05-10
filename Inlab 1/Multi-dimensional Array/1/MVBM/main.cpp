#include <bits/stdc++.h>

using namespace std;

int ascendingRows(int arr[][1000], int row, int col) 
{
    int res = 0;
    for (int i = 0; i < row; i++)
    {
        int pre = arr[i][0];
        for (int j = 1; j < col; j++)
        {
            if(arr[i][j]<=pre)
            {
                break;
            }
            pre=arr[i][j];
        }
        if (pre==arr[i][col-1])
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
    int arr[][1000] = {{32,4,9},{-80,37,71},{-91,-79,-55}};
    cout << ascendingRows(arr,3, 3);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}