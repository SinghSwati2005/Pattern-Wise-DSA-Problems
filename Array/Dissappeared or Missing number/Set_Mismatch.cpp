#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int s = 0, s2 = 0;
        int n = nums.size();
        
        for (int num : nums) {
            s += num;
            s2 += num * num;
        }
        
        int expected_sum = n * (n + 1) / 2;
        int expected_square_sum = n * (n + 1) * (2 * n + 1) / 6;
        
        int diff = expected_sum - s;          // m - d
        int diff2 = expected_square_sum - s2; // m^2 - d^2
        
        int sum_md = diff2 / diff;            // m + d
        
        int missing = (sum_md + diff) / 2;
        int duplicate = missing - diff;
        
        return {duplicate, missing};
    }
};

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;
    
    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    Solution sol;
    vector<int> ans = sol.findErrorNums(nums);
    
    cout << "Duplicate: " << ans[0] << ", Missing: " << ans[1] << endl;
    return 0;
}
