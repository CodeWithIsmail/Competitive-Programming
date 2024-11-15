#include <bits/stdc++.h>
using namespace std;

const int MOD = 998244353;
const int MAXN = 300000;

vector<long long> factorial(MAXN + 1), invFactorial(MAXN + 1);

// Function to perform modular exponentiation
long long modExp(long long base, long long exp, int mod) {
    long long result = 1;
    while (exp > 0) {
        if (exp % 2 == 1)
            result = (result * base) % mod;
        base = (base * base) % mod;
        exp /= 2;
    }
    return result;
}

// Function to precompute factorials and modular inverses
void precomputeFactorials(int n) {
    factorial[0] = invFactorial[0] = 1;
    for (int i = 1; i <= n; ++i) {
        factorial[i] = (factorial[i - 1] * i) % MOD;
    }
    invFactorial[n] = modExp(factorial[n], MOD - 2, MOD);
    for (int i = n - 1; i >= 1; --i) {
        invFactorial[i] = (invFactorial[i + 1] * (i + 1)) % MOD;
    }
    invFactorial[0] = 1;
}

// Function to compute nCk % MOD
long long binomialCoefficient(int n, int k) {
    if (k > n || k < 0) return 0;
    return factorial[n] * invFactorial[k] % MOD * invFactorial[n - k] % MOD;
}

int main() {
    int n;
    cin >> n;
    vector<int> red(n), green(n);
    for (int i = 0; i < n; ++i) cin >> red[i];
    for (int i = 0; i < n; ++i) cin >> green[i];

    // Precompute factorials and modular inverses up to n
    precomputeFactorials(n);

    // Calculate the total expected value sum of each box
    long long totalExpectedSum = 0;
    for (int i = 0; i < n; ++i) {
        totalExpectedSum = (totalExpectedSum + (red[i] + green[i])) % MOD;
    }

    // Divide by 2 using modular inverse
    totalExpectedSum = (totalExpectedSum * modExp(2, MOD - 2, MOD)) % MOD;

    // Output result for each K = 1 to N
    vector<long long> results(n);
    for (int k = 1; k <= n; ++k) {
        long long comb = binomialCoefficient(n - 1, k - 1);
        long long P = (totalExpectedSum * comb) % MOD;
        results[k - 1] = P;
    }

    for (int k = 0; k < n; ++k) {
        cout << results[k] << " ";
    }
    cout << endl;

    return 0;
}
