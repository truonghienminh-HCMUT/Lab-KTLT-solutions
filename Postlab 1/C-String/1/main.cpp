#include <bits/stdc++.h>

using namespace std;

void process(const char str[], char outstr[])
{
    int n = strlen(str);
    bool f = true,space = false;
    int m = 0;
    int i = 0;
    if (isalpha(str[0]))
    {
        outstr[m++] = isupper(str[0])?str[0]:toupper(str[0]);
        i++;
    }    
    while (str[i]!='\0')
    {
        if (str[i] == ' ')
        {
            if (i+1<n)
            {
                if (isalpha(str[i+1]))
                {
                    outstr[m++] = str[i];
                    outstr[m++] = isupper(str[i+1])?str[i+1]:toupper(str[i+1]);
                    i+=2;
                    
                }else if (str[i+1] != ' ')
                {
                    outstr[m++] = str[i];
                    i++;
                }
                
            }
        }        
        if (isalpha(str[i]))
        {
            outstr[m++] = islower(str[i])?str[i]:tolower(str[i]);
        }
        i++;
    }
    outstr[m++] = '\0';
}
int main()
{
    const int MAX_SIZE = 100;
    char str[] = "doAn VAN *(()hau @!#$" ;
    char outstr[MAX_SIZE];
    process(str, outstr);
    cout << outstr;
	
}