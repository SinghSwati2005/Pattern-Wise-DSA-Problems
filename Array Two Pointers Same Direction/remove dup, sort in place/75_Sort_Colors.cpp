#include<bits/stdc++.h>
using namespace std;

void sort_colors(vector<int>&nums){
    int n = nums.size();
    int low = 0;
    int high = n-1;
    int mid =0;
    while(mid<=high){
       
        if(nums[mid]==2){
            swap(nums[mid],nums[high]);
            high--;
           
        }
        else if(nums[mid]==1){
            mid++;
        }
        else{
            swap(nums[low],nums[mid]);
            low++;
            mid++;
        }
    }
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
for(int i =0;i<n;i++){
    cin>>nums[i];
}
sort_colors(nums);
for (int x : nums) cout << x << " ";
    return 0;
}

//dutch national flag algorithm

