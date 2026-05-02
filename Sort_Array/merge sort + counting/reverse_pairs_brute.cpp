#include<bits/stdc++.h>
using namespace std;

int reverse_pairs (vector<int>&nums){
    int n = nums.size();
    int cnt =0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(nums[i]>2*nums[j]){
                cnt++;
            }
            
        }
    }
    return cnt;


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