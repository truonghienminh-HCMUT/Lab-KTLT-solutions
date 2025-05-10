#include <bits/stdc++.h>

using namespace std;
void uppercase(string output)   
{
    ofstream out(output);
    string s;
    cin>>s;
    for (int i = 0; i < s.size(); i++)
    {
        s[i]=toupper(s[i]);
    }
    out<<s;
    out.close();
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}