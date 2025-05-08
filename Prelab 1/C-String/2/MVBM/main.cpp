#include <iostream>
#include <cstring>
using namespace std;

void recover(char signal[]) {
    int length = strlen(signal);
    for (int i = 0; i < length; i++)
    {
        //check space
        if (signal[i]==' ')
        {
            continue;
        }
        //a = 97
        if(signal[i]>=97 && signal[i] <=122)
        {
            signal[i] = char(signal[i]-32);
            continue;
        }
        if (signal[i]>=65 && signal[i] <=90)
        {
            signal[i] = char(signal[i]+32);
            continue;
        }
    }
    
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    char signal[] = "I waNT tO hAVe 10 MaRk In FudaMenTAL of PRogRamInG couRsE." ;
    recover(signal);
    cout << signal;
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}