class Solution {
public:
   bool isPalindrome(int x) {
    if (x < 0) return false;
    long y=0;
    long x1=x;
    while (x1>0) {
        y = y*10 + x1%10;
        x1/=10;
    }
    return (y == x);
}
};
