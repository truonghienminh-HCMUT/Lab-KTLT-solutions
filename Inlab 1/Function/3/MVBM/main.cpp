#include <bits/stdc++.h>

using namespace std;

void encrypt(char* text, int shift) 
{
    int n = 0;
    shift = (shift % 26 + 26) % 26;
    while (text[n]!='\0')
    {
        if (isalpha(text[n]))
        {
            text[n] = (text[n] - (islower(text[n]) ? 'a' : 'A') + shift) % 26 + (islower(text[n]) ? 'a' : 'A');
        }
        n++;
    }
}
void decrypt(char* text, int shift) 
{
    int n = 0;
    shift = (shift % 26 + 26) % 26;
    while (text[n]!='\0')
    {
        if (isalpha(text[n]))
        {
            text[n] = (text[n] - (islower(text[n])? 'a' : 'A') - shift + 26) % 26 + (islower(text[n])? 'a' : 'A');
        }
        n++;
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n, shift;
    cin >> n >> shift;
    char* text = new char[n+1];
    for(int i = 0; i < n; i++) cin >> text[i];
    text[n] = 0;
    cout<<endl<<text<<endl;
    encrypt(text,shift);
    cout<<text<<endl;
    decrypt(text,shift);
    cout<<text;
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}