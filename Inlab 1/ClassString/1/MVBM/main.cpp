#include <bits/stdc++.h>

using namespace std;

void replaceString(string s, string s1, string s2){
    size_t found = s.find_last_of(s1)-s1.size()+1;
    if (found == string::npos)
    {
        cout<<s;
        return;
    }
    s.replace(found,s1.size(),s2);
    cout<<s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "Truong Dai Hoc Bach Khoa, Sai Gon";
    string s1 = "ai";
    string s2 = "ong phan dieu";
    replaceString(s, s1, s2);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}