//Lame Solution
int climbStairs(int n) {
    if(n == 0 || n == 1) return 1;
    int l = climbStairs(n-1);
    int r = climbStairs(n-2);
    return l+r;
}
