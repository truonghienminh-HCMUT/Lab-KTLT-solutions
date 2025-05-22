void addElement(int*& arr, int n, int val, int index) 
{
    int* a = new int[n+1];
    bool f = 0;
    for (int i = 0; i < n+1; i++)
    {
        if (i==index)
        {
            a[i] = val;
            f = 1;
        }
        a[i+f]=arr[i];
    }
    delete []arr;
    arr = a;
}