#include<bits/stdc++.h>
using namespace std;

vector<int>findClosesElement(vector<int>&nums , int k , int x){
  int left =0 , right = nums.size()-k;
  while(left<right){
    int mid = (left+right)/2;
    if(x-nums[mid]>nums[mid+k]-x){
        left=mid+1;
    }
    else{
        right=mid;
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

// Time: O(log(n-k) + k)

// Most efficient and elegant solution The space complexity is O(k) for storing the result, as no additional space beyond storing the result is needed..