#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long i, n, zero = 0;
    cin >> n;
    for (i = 5; i <= n; i = i * 5)
        zero += n / i;

    cout << zero;
}

/*
find number of digit in n!
double digit = 0;
    for (i = 1; i <= n; i++)
        digit += (double)log10(i);

    int temp = floor(digit);
    cout << temp + 1<<endl;

*/