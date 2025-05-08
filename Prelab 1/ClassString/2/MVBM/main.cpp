#include <bits/stdc++.h>

using namespace std;
//i dont use string find but still AC
void findAllIndex(string s1, string s2){
    //this is ↓ for worst case scenario
    int res[s1.length()];
    int k = 0;
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] == s2[0])
        {
            res[k++] = i;
        }
    }
    for (int  i = 0; i < k-1; i++)
    {
        cout<<res[i]<<" ";
    }
    if (k==0)
    {
        cout<<-1;
    }else
    {
        cout<<res[k-1];        
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s1 = "Truong Dai Hoc Bach Khoa.";
    string s2 = "a";
    findAllIndex(s1, s2);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}