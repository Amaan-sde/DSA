class Solution {
public:
    long long flowerGame(int n, int m) {
        long long  x=n;
        long long  y=m;
        long long  res = x*y;
        long long  ans =res/2;
        return ans;
    }
};