#include<iostream>
#include<vector>
using namespace std;

int finddup(vector<int>&nums){
    int n = nums.size();
    int low =0;
    int high = n-1;
    while(low<high){
        int mid = (low+high)/2;
        int cnt=0;
        for(int num : nums){
            if(num<=mid)cnt++;
        }
        if(cnt>mid){
            high = mid;

        }
        else{
            low = mid+1;
        }
    }
    return low;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    
        cout<<finddup(nums)<<" ";

    
    return 0;
}

// tc - O(nlogn)
// tc - O(1)