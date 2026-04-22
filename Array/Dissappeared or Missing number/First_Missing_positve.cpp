#include <bits/stdc++.h>
using namespace std;

int firstMissingPos (vector<int>&nums){
    int n = nums.size();
    for(int i =0;i<n;i++){
        while(nums[i]>0  && nums[i]<=n &&nums[nums[i]-1]!=nums[i]){
            swap(nums[i],nums[nums[i]-1]);
        }
    }
    for(int i =0;i<n;i++){
        if(nums[i]!=i+1){
            return i+1;
        }
    }
    return n+1;
}

int main(){
    
    int n;
  
    cin >> n;
    
    vector<int> nums(n);
    
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
   
    
    
    cout <<firstMissingPos(nums)<<"";
    return 0;
}

//nums[i] > 0

// We only care about positive integers.

// Negative numbers and zero can’t be the answer, so skip them.

// nums[i] <= n

// The missing number must be in the range [1..n].

// Any number greater than n is irrelevant (because if all 1..n are present, the answer is n+1).

// nums[nums[i] - 1] != nums[i]

// Ensures we don’t swap endlessly.

// Example: if nums[i] = 3, it belongs at index 2.

// If it’s already there, no need to swap.

// Prevents infinite loops when duplicates exist