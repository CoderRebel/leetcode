class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // vector<bool> uses 1 bit per element, vastly improving cache locality
        vector<bool> isPrime(n, true);
        int count = n / 2; // Assume all odd numbers >= 3 are prime initially

        for (int i = 3; i * 1LL * i < n; i += 2) {
            if (isPrime[i]) {
                // Step by 2*i to only mark odd multiples (e.g., 3*3, 3*5, 3*7...)
                for (int j = i * i; j < n; j += 2 * i) {
                    if (isPrime[j]) {
                        isPrime[j] = false;
                        count--;
                    }
                }
            }
        }

        return count;
    }
};