#include <bits/stdc++.h>

using namespace std;
void process(char str[], char outstr[]) {
    int len = strlen(str);
    int size = 0;
    int start = 0, end = len;
    for (int i = 0; i < len; i++)
    {
        if (str[i]!=' ')
        {
            start = i;
            break;
        }   
    }
    for (int i = len-1; i >=0 ; i--)
    {
        if (str[i]!=' ')
        {
            end = i+1;
            break;
        }   
    }
    
    for (int i = start; i < end; i++)
    {
        if (str[i]==' ' && str[i+1]==' ')
        {
            continue;
        }
        outstr[size] = str[i];
        size++;
    }
    outstr[size]='\0';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    const int MAX_SIZE = 100;
    char str[] = "  abc  def  ghi  " ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}