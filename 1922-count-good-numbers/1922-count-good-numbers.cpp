class Solution {
public:

    long long power(int a, long long b) {
        int mod = 1000000007;

        if (b == 0) return 1;

        long long x = power(a, b / 2);

        if (b % 2 == 0) {
            return x * x % mod;
        }

        return (a * x * x) % mod;
    }

    int countGoodNumbers(long long n) {
        long long even = (n + 1) / 2;
        long long odd = n / 2;

        long long mod = 1000000007;

        long long ans = power(5, even) * power(4, odd);

        return ans % mod;
    }
};