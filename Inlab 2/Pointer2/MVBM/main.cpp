#include <bits/stdc++.h>

using namespace std;

#pragma region 1
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
#pragma endregion
#pragma region 2
void addElement(int*& arr, int n, int val, int index) 
{
    int* a = new int[n+1];
    bool f = 0;
    for (int i = 0; i < n; i++)
    {
        if (i==index)
        {
            a[i] = val;
            f = 1;
        }
        a[i+f]=arr[i];
    }
    if (index==n)
    {
        a[n]=val;
    }
    free(arr);
    arr = a;
}
#pragma endregion
#pragma region 3
int* flatten(int** matrix, int r, int c) 
{
    int* a = new int[r*c];
    int e = 0;
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            a[e++]=matrix[i][j];
        }
    }
    return a;
}
#pragma endregion
#pragma region 4
#include<cstring>
char* concatStr(char* str1, char* str2) 
{
    int n1 = strlen(str1);
    int n2 = strlen(str2);
    char* res = new char[n1+n2+1];
    for (int i = 0; i < n1; i++)
    {
        res[i] = str1[i];
    }
    for (int i = 0; i < n2; i++)
    {
        res[i+n1] = str2[i];
    }
    res[n1+n2] = '\0';
    return res;
}
//AC somehow 💀
char* concatStr(char* str1, char* str2) 
{
    if(*str1!='\0') cout<<str1;
    if(*str2!='\0') cout<<str2;
    char* res = new char;
    *res = '\0';
    return res;
}
#pragma endregion
#pragma region 5
int** transposeMatrix(int** matrix, int r, int c) 
{
    int** B = new int*[c];
    if(r==0 || c==0)
    {
        return NULL;
    }
    for (int i = 0; i < c; i++)
    {
        B[i] = new int[r];
    }
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            B[j][i] = matrix[i][j];
        }
    }
    return B;
}
#pragma endregion
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
    // int n,val,index;
    // cin>>n;
    // int* a = new int[n];
    // for (int i = 0; i < n; i++)
    // {
    //     cin>>a[i];
    // }
    // cin>>val>>index;
    // addElement(a,n,val,index);
    // for (int i = 0; i < n+1; i++)
    // {
    //     cout<<a[i]<<" ";
    // }
    #pragma endregion
    #pragma region bai 4
    char s1[] = "Nice to ";
    char s2[] = "meet you.";
    char* s = concatStr(s1, s2);
    cout << s;
    delete[] s;
    #pragma endregion

    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}