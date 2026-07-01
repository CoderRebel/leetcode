class Solution {
public:
    int mod = 1000000007;
    long long modPow( long long base , long long power){
        if(power == 0) return 1;

        long long half = modPow(base , power/2);
        long long ans = (half * half) % mod;

        if(power % 2 != 0){
            ans = (ans * base) % mod;
        }

        return ans;


    }
    int countGoodNumbers(long long n) {
       long long evenCount = (n+1)/2;
       long long oddCount = (n/2);
        return (modPow(5 , evenCount) * modPow(4 , oddCount))%mod;
    }
};