#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0;      // starting index of longest palindrome
        int maxLen = 1;     // length of longest palindrome

        // check each index as center
        for (int center = 0; center < n; center++) {
            // odd length palindrome
            int i = center, j = center;
            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > maxLen) {
                    start = i;
                    maxLen = j - i + 1;
                }
                i--; j++;
            }

            // even length palindrome
            i = center; j = center + 1;
            while (i >= 0 && j < n && s[i] == s[j]) {
                if (j - i + 1 > maxLen) {
                    start = i;
                    maxLen = j - i + 1;
                }
                i--; j++;
            }
        }

        return s.substr(start, maxLen);
    }
};

int main() {
    string s;
    cin >> s;
    Solution obj;
    cout << obj.longestPalindrome(s) << endl;
    return 0;
}
