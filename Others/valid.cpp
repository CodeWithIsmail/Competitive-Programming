#include "testlib.h"
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char* argv[]) {
    registerValidation(argc, argv);
    
    // Read the input string
    string input_str = inf.readToken();  // Read a single string token
    inf.readEoln();                      // Ensure the end of line
    
    // Constraints for the length of the string
    const int MIN_LENGTH = 1;
    const int MAX_LENGTH = 1000000;
    
    // Check string length
    ensuref(input_str.size() >= MIN_LENGTH && input_str.size() <= MAX_LENGTH,
            "Input string length %d is out of bounds [%d, %d]",
            (int)input_str.size(), MIN_LENGTH, MAX_LENGTH);

    // Check that the string contains only uppercase English letters
    for (char ch : input_str) {
        ensuref(isupper(ch), "Input string contains invalid character '%c'", ch);
    }

    // Check for end of file
    inf.readEof();
    return 0;
}
