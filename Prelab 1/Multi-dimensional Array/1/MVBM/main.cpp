#include <iostream>
#include <climits>

using namespace std;

int findMaxColumn(int arr[][1000], int row, int col) 
{
    int res = 0;
    int max = arr[0][0];
    for (int i = 0; i < col; i++)
    {
        int sum = 0;
        for (int j = 0; j < row; j++)
        {
            sum += arr[j][i];
        }
        if (sum>=max)
        {
            max = sum;
            res = i;
        }
    }
    return res;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int arr[][1000] = {{-92,78,-2,-58,-37},{44,-4,30,-69,22}};
    cout << findMaxColumn(arr, 2,5);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}