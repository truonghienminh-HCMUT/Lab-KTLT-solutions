#include <bits/stdc++.h>

using namespace std;

bool isequal(char s1[], char s2[])
{
    for (int i = 0; i < min(strlen(s1),strlen(s2)); i++)
    {
        if (s1[i]!=s2[i])
        {
            return false;
        }
    }
    return strlen(s1)==strlen(s2);
}
void printFirstRepeatedWord(char str[]) {
    char words[strlen(str)][strlen(str)];
    int size = 0, last = 0;
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i]==' ')
        {
            strncpy(words[size],str+last,i-last);
            words[size][i-last] = '\0';
            last = i+1;
            size++;
        }
    }
    strncpy(words[size],str+last,strlen(str)-last);
    words[size][strlen(str)-last] = '\0';
    size++;
    bool insert[size];
    memset(insert,false,sizeof(insert));
    for (int i = 0; i < size; i++)
    {
        int j = 0;
        while (insert[j])
        {
            if (isequal(words[i],words[j]))
            {
                cout<<words[i];
                return;
            }
            j++;
        }
        insert[i]=true;
    }
    cout<<"No Repetition";
}    

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char str[] = "car taxi bike bike car taxi" ;
    printFirstRepeatedWord(str);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}
