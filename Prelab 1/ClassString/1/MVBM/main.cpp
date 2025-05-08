#include <bits/stdc++.h>

using namespace std;

void cutString(string s, int index){
    if(index>s.length())
    {
        return;
    }
    cout<<s.substr(index,s.length());
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "Truong Dai Hoc Bach Khoa.";
    cutString(s, 7);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}