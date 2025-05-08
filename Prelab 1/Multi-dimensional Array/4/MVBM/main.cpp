#include <bits/stdc++.h>

using namespace std;

int sumdia(int arr[][1000], int row, int col, int x, int y)
{
    int res = 0;
    int i = x , j = y;
    while (i<row && j<col)
    {
        res += arr[i][j];
        i++;
        j++;
    }
    i = x , j = y;
    while (i>=0 && j>=0)
    {
        res += arr[i][j];
        i--;
        j--;
    }
    return res;
}
int sumdiaup(int arr[][1000], int row, int col, int x, int y)
{
    int res = 0;
    int i = x , j = y;
    while (i<row && j>=0)
    {
        res += arr[i][j];
        i++;
        j--;
    }
    i = x , j = y;
    while (i>=0 && j<col)
    {
        res += arr[i][j];
        i--;
        j++;
    }
    return res;
}
int diagonalDiff(int arr[][1000], int row, int col, int x, int y) 
{
    return abs(sumdia(arr,row,col,x,y)-sumdiaup(arr,row,col,x,y));
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[][1000] = {{88,72,65,37},{82,84,34,12},{74,46,88,44}};
    cout <<diagonalDiff(arr,3,4,1,0);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}