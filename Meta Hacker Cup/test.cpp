#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

typedef long long ll;
typedef vector<ll> vl;

int main() {
    ll mx = 1e9;  // Limit set to 1e9
    vl prime;
    vector<bool> isPrime(mx + 1, true);  // Create a boolean vector to store prime status
    isPrime[0] = isPrime[1] = false;     // 0 and 1 are not prime numbers

    // Handle 2 separately to skip even numbers in the main loop
    prime.push_back(2);
    for (ll i = 4; i <= mx; i += 2) {
        isPrime[i] = false;
    }

    // Optimized Sieve of Eratosthenes
    for (ll i = 3; i * i <= mx; i += 2) {
        if (isPrime[i]) {
            for (ll j = i * i; j <= mx; j += 2 * i) {  // Increment by 2*i to skip even multiples
                isPrime[j] = false;
            }
            prime.push_back(i);
        }
    }

    // Collect all remaining primes after sqrt(mx)
    for (ll i = sqrt(mx) + 1; i <= mx; i += 2) {
        if (isPrime[i]) {
            prime.push_back(i);
        }
    }

    cout << prime.size() << "\n";  // Output the number of primes found

    return 0;
}
