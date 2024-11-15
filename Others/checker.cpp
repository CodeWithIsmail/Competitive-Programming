#include <iostream>
#include <string>
#include <algorithm>
#include <unordered_map>

using namespace std;

bool is_palindrome(const string &s)
{
    string reversed = s;
    reverse(reversed.begin(), reversed.end());
    return s == reversed;
}

bool are_anagrams(const string &s1, const string &s2)
{
    if (s1.size() != s2.size())
        return false;
    unordered_map<char, int> freq;
    for (char ch : s1)
        freq[ch]++;
    for (char ch : s2)
    {
        if (--freq[ch] < 0)
            return false;
    }
    return true;
}

int checker(const string &input_str, const string &output_str)
{
    if (!are_anagrams(input_str, output_str))
        return 1;
    if (!is_palindrome(output_str))
        return 1;
    return 0;
}

int main()
{
    string input_str, output_str;
    cin >> input_str >> output_str;

    cout << checker(input_str, output_str) << endl;

    return 0;
}
