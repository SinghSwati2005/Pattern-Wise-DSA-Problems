#include<bits/stdc++.h>
using namespace std;

vector<int> min_using_two_pointer_brute_force(vector<int> nums, int k, int x){
    vector<int> diff(nums.size());
    for(int i = 0; i < nums.size(); i++){
        diff[i] = abs(nums[i] - x);
    }

    int minimum = INT_MAX, min_index = -1;
    for(int i = 0; i < nums.size(); i++){
        if(minimum > diff[i]){
            minimum = diff[i];
            min_index = i;
        }
    }
    vector<int> ans;
    ans.push_back(nums[min_index]);
    int left = min_index - 1;
    int right = min_index + 1;
    for (int i = 1; i < k; i++) {
        if (left < 0) {
            ans.push_back(nums[right++]);
        } else if (right >= nums.size()) {
            ans.push_back(nums[left--]);
        } else if (diff[left] <= diff[right]) {
            ans.push_back(nums[left--]);
        } else {
            ans.push_back(nums[right++]);
        }
    }

    sort(ans.begin(), ans.end());
    return ans;
}

int main(){
    int n,k,x;
    cin>>n>>k>>x;

    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans = min_using_two_pointer_brute_force(nums,k,x);
for (int num : ans) cout << num << " ";

    return 0;
}

// Time: O(n log k)

// Space: O(k)

// Faster than brute force, but still not the most optimal