#include <cstring>
#include <bits/stdc++.h>

using namespace std;

int find(char str[], char substr[]) {
    // TODO
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==substr[0])
        {
            bool flag = true;
            for (int j = i+1; j < i+strlen(substr); j++)
            {

                if (str[j]!=substr[j-i])
                {
                    flag = false;
                    break;
                }
                
            }
            if (flag)
            {
                return i;
            }
        }
        
    }
    return -1;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // char str[] = "hello world";
    // char substr[] = "world";
    // cout << find(str, substr);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}