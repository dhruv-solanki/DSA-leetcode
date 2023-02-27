// Given an integer n, return the number of prime numbers that are strictly less than n.

// Level: Medium
// Time Complexity:  O(n * log(log(n)))
// Space Complexity: O(n)

// Algorithm: Sieve of Eratosthenes
// URL: https://www.geeksforgeeks.org/sieve-of-eratosthenes/

class Solution {
public:
    int countPrimes(int n) {
        int primeCount = 0;
        bool prime[n+1];
        memset(prime, true, sizeof(prime));

        for(int p = 2; p*p <= n; p++) {
            if(prime[p] == true) {
                for(int i = p * p; i <= n; i += p) {
                    prime[i] = false;
                }
            }
        }

        for(int p = 2; p < n; p++) {
            if(prime[p]) primeCount++;
        }

        return primeCount;
    }
};
