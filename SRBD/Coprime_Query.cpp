#include <iostream>
#include <vector>
#include <numeric> // for std::gcd
using namespace std;

const int MAXN = 200000;

int main() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n);
    vector<int> frequency(MAXN + 1, 0);
    
    // Read the array and count frequencies
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        frequency[a[i]]++;
    }

    // To store coprime counts for each number from 1 to MAXN
    vector<int> coprimeCount(MAXN + 1, 0);

    // Use the Sieve of Eratosthenes-like method to count coprimes
    for (int i = 1; i <= MAXN; i++) {
        // Count how many numbers in the frequency array are divisible by i
        for (int j = i; j <= MAXN; j += i) {
            coprimeCount[i] += frequency[j];
        }
    }

    // Now, for each number, we need to adjust the count to only include coprime numbers
    for (int i = MAXN; i >= 1; i--) {
        for (int j = 2 * i; j <= MAXN; j += i) {
            coprimeCount[i] -= coprimeCount[j];
        }
    }

    // Answer each query
    while (q--) {
        int x;
        cin >> x;
        cout << coprimeCount[x] << "\n"; // Output the count of coprimes for each query
    }

    return 0;
}
