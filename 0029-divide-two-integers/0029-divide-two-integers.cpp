class Solution {
public:
    long divide(long dividend, long divisor) {
        if(dividend == divisor) return 1;
        bool sign = true;

        if(dividend >= 0 && divisor < 0) sign = false;
        if(dividend <0 && divisor >0) sign = false; 
        long n = abs(dividend);
        long d = abs(divisor);
        long ans = 0;
        while(n>=d){
            long count = 0;
            while(n>=(d<<(count+1))){
                count++;
            }
            ans += (1L<<count);
            n = n - (d*(1L<<count));
        }
        if(ans >= pow(2,31) && sign==true ) return INT_MAX;
        if(ans >= pow(2,31) && sign==false) return INT_MIN;

        return sign? ans : -1*ans;

    }
};