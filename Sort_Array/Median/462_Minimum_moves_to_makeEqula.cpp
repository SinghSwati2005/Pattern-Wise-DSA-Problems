#include<bits/stdc++.h>
using namespace std;


int minimum_moves(vector<int>&nums){
    int n = nums.size();
    int moves =0;
    int median = nums[n/2];
    for(int i =0;i<n;i++){
        moves +=abs(nums[i]-median);
    }
    return moves;
}

int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }

    cout<<minimum_moves(nums)<<" ";
    return 0;
}