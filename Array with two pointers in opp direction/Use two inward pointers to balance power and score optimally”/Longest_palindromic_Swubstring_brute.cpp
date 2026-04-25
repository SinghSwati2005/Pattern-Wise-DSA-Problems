#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string longestPalindrome(string s) {
        int n = s.size();
        if (n == 0) return "";

        int start = 0;      // starting index of longest palindrome
        int maxLen = 1;     // length of longest palindrome

        // try all substrings
        for (int i = 0; i < n; i++) {
            for (int j = i; j < n; j++) {
                int l = i, r = j;
                bool isPalin = true;

                // check palindrome with two pointers
                while (l < r) {
                    if (s[l] != s[r]) {
                        isPalin = false;
                        break;
                    }
                    l++; r--;
                }

                if (isPalin && (j - i + 1 > maxLen)) {
                    start = i;
                    maxLen = j - i + 1;
                }
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
 