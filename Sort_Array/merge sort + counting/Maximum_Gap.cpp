#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n = nums.size();
        if (n < 2) return 0;

        int minVal = INT_MAX;
        int maxVal = INT_MIN;

        for (int x : nums) {
            minVal = min(minVal, x);
            maxVal = max(maxVal, x);
        }

        int bucketSize = ceil((double)(maxVal - minVal) / (n - 1));
        vector<int> minOfBucket(n - 1, INT_MAX);
        vector<int> maxOfBucket(n - 1, INT_MIN);

        // Place elements into buckets
        for (int x : nums) {
            if (x == minVal || x == maxVal) continue;
            int idx = (x - minVal) / bucketSize;
            minOfBucket[idx] = min(minOfBucket[idx], x);
            maxOfBucket[idx] = max(maxOfBucket[idx], x);
        }

        // Calculate maximum gap
        int maxGap = 0;
        int prev = minVal;
        for (int i = 0; i < n - 1; i++) {
            if (maxOfBucket[i] == INT_MIN) continue; // empty bucket
            maxGap = max(maxGap, minOfBucket[i] - prev);
            prev = maxOfBucket[i];
        }
        maxGap = max(maxGap, maxVal - prev);

        return maxGap;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];

    Solution obj;
    cout << obj.maximumGap(nums) << endl;
    return 0;
}
