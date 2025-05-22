#include <bits/stdc++.h>

using namespace std;

int** readArray()
{
    int** arr = new int*[11];
    int x;
    for(int i = 0; i<11; i++)
    {
        arr[i] = new int[11];
    }
    // //debug
    // cout<<"----start config----\n";
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         arr[i][j]=0;
    //         cout<<arr[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"----end config----\n";
    for (int i = 0; i < 10; i++)
    {
        for (int j = 0; j < 10; j++)
        {
            cin>>x;
            if (x == 0)
            {
                for (int e = j; e < 10; e++)
                {
                    arr[i][e]=0;
                }
                break;
            }else
            {
                arr[i][j]=x;
            }
        }
        
    }
    return arr;
}
void addElement(int*& arr, int n, int val, int index) 
{
    int* a = new int[n+1];
    bool f = 0;
    for (int i = 0; i < n+1; i++)
    {
        if (i==index)
        {
            a[i] = val;
            f = 1;
        }
        a[i+f]=arr[i];
    }
    // delete []arr;
    arr = a;
}
int main()
{
    // ios_base::sync_with_stdio(false);
    // cin.tie(NULL);
    #pragma region bai 1
    // int** a = readArray();
    // cout<<"----start config----\n";
    // for (int i = 0; i < 10; i++)
    // {
    //     for (int j = 0; j < 10; j++)
    //     {
    //         cout<<a[i][j]<<" ";
    //     }
    //     cout<<"\n";
    // }
    // cout<<"----end config----\n";
    #pragma endregion
    #pragma region bai 2
    int n,val,index;
    cin>>n;
    int* a = new int[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    cin>>val>>index;
    addElement(a,n,val,index);
    for (int i = 0; i < n+1; i++)
    {
        cout<<a[i]<<" ";
    }
    #pragma endregion

    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}