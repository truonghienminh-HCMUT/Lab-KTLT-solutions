int calculate_power(int n, int e) 
{ 
    if (e==1)
    {
        return n;
    }
    return calculate_power(n,e-1) * n;
}