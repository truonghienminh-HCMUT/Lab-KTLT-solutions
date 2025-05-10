#include <bits/stdc++.h>

using namespace std;
// #include <float.h>
void process(string fileName)   
{
    ifstream in(fileName);
    int n,m;
    in>>n>>m;
    double max_all = -DBL_MAX;
    for (int i = 0; i < n; i++)
    {
        double max_r,a;
        in>>max_r;
        for (int j = 1; j < m; j++)
        {
            in>>a;
            max_r = max(max_r,a);
        }
        cout<<max_r<<" ";
        max_all = max(max_all,max_r);
    }
    cout<<max_all;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    // freopen("in.INP", "r", stdin);
    // freopen("out.INP", "w", stdout);
}