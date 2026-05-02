#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> freq;
        for (int x : nums) {
            freq[x]++;
        }

        int n = nums.size();
        // buckets where index = frequency
        vector<vector<int>> buckets(n+1);
        for (auto &p : freq) {
            buckets[p.second].push_back(p.first);
        }

        vector<int> result;
        for (int i = n; i >= 1 && result.size() < k; i--) {
            for (int x : buckets[i]) {
                result.push_back(x);
                if (result.size() == k) break;
            }
        }
        return result;
    }
};

int main() {
    int n, k;
    cin >> n >> k;                 // first line: size of array and k
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {  // second line: array elements
        cin >> nums[i];
    }

    Solution obj;
    vector<int> ans = obj.topKFrequent(nums, k);

    for (int x : ans) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}
