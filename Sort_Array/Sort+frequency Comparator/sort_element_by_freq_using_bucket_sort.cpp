#include <bits/stdc++.h>
using namespace std;

vector<int> sortByFreq(vector<int>& nums) {
    // Step 1: frequency array (values up to 1000)
    vector<int> freq(1001, 0);
    for (int x : nums) freq[x]++;

    int n = nums.size();
    // Step 2: buckets where index = frequency
    vector<vector<int>> buckets(n+1);
    for (int val = 0; val <= 1000; val++) {
        if (freq[val] > 0) {
            buckets[freq[val]].push_back(val);
        }
    }

    // Step 3: build result from high frequency down
    vector<int> res;
    for (int f = n; f >= 1; f--) {
        if (!buckets[f].empty()) {
            sort(buckets[f].begin(), buckets[f].end()); // tie-breaker: smaller first
            for (int val : buckets[f]) {
                for (int count = 0; count < f; count++) {
                    res.push_back(val); // push the actual value 'val'
                }
            }
        }
    }
    return res;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    vector<int> ans = sortByFreq(arr);

    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
