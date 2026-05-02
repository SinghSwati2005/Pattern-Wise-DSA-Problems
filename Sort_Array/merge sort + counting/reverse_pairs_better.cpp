#include<bits/stdc++.h>
using namespace std;


int merge( vector<int>&nums , int low , int mid , int high){
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right<=high){
        if(nums[left]<=nums[right]){
            temp.push_back(nums[left++]);
        }
        else{
            temp.push_back(nums[right++]);
        }
    }

    while(left<=mid){
        temp.push_back(nums[left++]);
    }
    while(right<=high){
        temp.push_back(nums[right++]);
    }

    for(int i =low;i<=high;i++){
        nums[i] = temp[i-low];
    }
}


int countPairs(vector<int>&nums, int low , int mid, int high){
    int right = mid+1;
    int cnt =0;
    for(int i =low ; i<=mid;i++){
        while(right<=high && (long long)nums[i]> 2*nums[right])
        right++;
        cnt+=(right-(mid+1));
    }
    return cnt;
}

int mergeSort(vector<int>&nums , int low , int high){
int cnt =0;
if(low>=high) return cnt;
int mid = (low+high)/2;

cnt+=mergeSort(nums , low , mid);
cnt+=mergeSort(nums , mid+1 , high);
cnt+=countPairs(nums , low , mid,high);
merge(nums, low, mid , high);
return cnt;


}


int reverse_pairs (vector<int>&nums){
  int n = nums.size();
  return mergeSort(nums, 0 , n-1); 
}



int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<reverse_pairs(nums)<<" ";
    return 0;
}

//O(n^2)