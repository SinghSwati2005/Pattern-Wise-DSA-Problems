#include<bits/stdc++.h>
using namespace std;

vector<int>findClosesElement(vector<int>&nums , int k , int x){
  int left =0 , right = nums.size()-1;
  while(right-left>=k){
    if(x-nums[left]>nums[right]-x){
        left++;
    }
    else{
        right--;
    }
    
  }
  return vector<int>(nums.begin()+left, nums.begin()+left+k);
    }

int main(){
    int n,k,x;
    cin>>n>>k>>x;

    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans = findClosesElement(nums,k,x);
for (int num : ans) cout << num << " ";

    return 0;
}

// // The algorithm runs in O(n) time, where n is the size of the array. This is because the two-pointer technique iterates through the array once, adjusting the pointers until the correct subarray of size k is found.
// Space Complexity:
// The space complexity is O(1) for the pointers, plus O(k) for the result subarray, leading to an overall space complexity of O(k)
