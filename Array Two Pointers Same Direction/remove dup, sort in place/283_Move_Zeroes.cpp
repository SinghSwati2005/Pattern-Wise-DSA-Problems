#include<bits/stdc++.h>
using namespace std;

void move_zeroes(vector<int>&nums){
    int n = nums.size();
    int k =0;
   
    for(int i =1;i<n;i++){
        if(nums[i]!=nums[k]){
            swap(nums[i],nums[k]);
            k++;
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
move_zeroes(nums);
for (int x : nums) cout << x << " ";
    return 0;
}