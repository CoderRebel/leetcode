class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int ans = gcd(n * (n+1) , n*n);
       return ans;
    }
};