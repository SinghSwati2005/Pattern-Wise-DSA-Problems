#include <bits/stdc++.h>
using namespace std;

int compareVersion(string version1, string version2) {
    int i = 0, j = 0;
    int n1 = version1.size(), n2 = version2.size();

    while (i < n1 || j < n2) {
        long v1 = 0, v2 = 0;

        // parse revision from version1
        while (i < n1 && version1[i] != '.') {
            v1 = v1 * 10 + (version1[i] - '0');
            i++;
        }
        if (i < n1 && version1[i] == '.') i++;

        // parse revision from version2
        while (j < n2 && version2[j] != '.') {
            v2 = v2 * 10 + (version2[j] - '0');
            j++;
        }
        if (j < n2 && version2[j] == '.') j++;

        // compare revisions
        if (v1 < v2) return -1;
        if (v1 > v2) return 1;
    }
    return 0;
}

int main() {
    string s1, s2;
    cin >> s1 >> s2;
    cout << compareVersion(s1, s2);
    return 0;
}
