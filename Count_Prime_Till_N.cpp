//https://leetcode.com/problems/count-primes/description/?envType=problem-list-v2&envId=array

class Solution {
public:
    int countPrimes(int n) {
        if (n <= 2) return 0;

        // Create a boolean array "isPrime[0..n-1]" and initialize
        // all entries it as true. A value in isPrime[i] will
        // finally be false if i is Not a prime, else true.
        vector<bool> isPrime(n, true);
        isPrime[0] = false;
        isPrime[1] = false;

        // Iterate from 2 to sqrt(n)
        for (int p = 2; p * p < n; p++) {
            // If isPrime[p] is not changed, then it is a prime
            if (isPrime[p]) {
                // Update all multiples of p starting from p*p
                for (int i = p * p; i < n; i += p)
                    isPrime[i] = false;
            }
        }

        // Count all true values in isPrime
        int count = 0;
        for (int i = 2; i < n; i++) {
            if (isPrime[i]) {
                count++;
            }
        }

        return count;
    }
};
