#include <bits/stdc++.h>

using namespace std;

bool isSymmetric(int arr[][1000], int row, int col) 
{
    for (int i = 0; i < row; i++)
    {
        for (int j = i+1; j < col; j++)
        {
            if (arr[i][j] != arr[j][i])
            {
                return false;
            }
            
        }
        
    }
    return true;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[][1000] = {{1,4,6}, {4,5,3}, {6,3,9}};
cout << isSymmetric(arr,3,3);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}