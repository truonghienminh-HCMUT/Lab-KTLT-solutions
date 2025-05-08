int Dec_to_m(int n, int m) {
    if (n == 0) return 0;
    return Dec_to_m(n / m, m) * 10 + (n % m);
}
int convertToBaseM(int n, int m = 2) {
    // Write your code 
    if(n==0) return 0;
    return Dec_to_m(n,m);
}
