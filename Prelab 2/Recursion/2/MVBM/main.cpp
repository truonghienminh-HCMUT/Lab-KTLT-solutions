int gcdRecursion(int p, int q)
{
    if(p==0)
    {
        return q;
    }
    if(q == 0)
    {
        return p;
    }
    if(p>q)
    {
        return gcdRecursion(p%q,q);    
    }
    else
    {
        return gcdRecursion(p,q%p);
    }
}
int gcdIteration(int p, int q)
{
    while(true)
    {
        if(p==0)
        {
            return q;
        }
        if(q == 0)
        {
            return p;
        }
        if(p>q)
        {
            p = p%q;
        }else if (q>p)
        {
            q = q%p;
        }
    }
    if(p>1) return q;
    return p;
}
#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    cout<<5%5;
}