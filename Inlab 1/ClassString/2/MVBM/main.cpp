#include <bits/stdc++.h>

using namespace std;

void deleteWord(string s, string s1)
{
    for (int i = 0; i < s.size(); i++)
    {
        if (s[i]==s1[0])
        {
            int start = i;
            bool f = true;
            for (; i < start + s1.size() && i< s.size(); i++)
            {
                if (s[i]!=s1[i-start])
                {
                    f=false;
                    break;
                }
            }
            if (f)
            {
                s.erase(start,s1.size());
                i=i-s1.size()-1;
            }
        }
        
    }
    cout<<s;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string s = "aaaaaaaaaaaaaaaaaaaaaaaaaaaaaa";
    string s1 = "a";
    deleteWord(s, s1);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}