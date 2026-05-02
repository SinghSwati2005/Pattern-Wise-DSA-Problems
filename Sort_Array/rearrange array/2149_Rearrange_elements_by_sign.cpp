#include<bits/stdc++.h>
using namespace  std;

vector<int>bysign(vector<int>&nums){
 vector<int>pos, neg;
 for(int i =0;i<nums.size();i++){
    int x = nums[i];
    if(x>0) pos.push_back(x);
    else neg.push_back(x);
 }

 vector<int>res;
 for(int i =0;i<pos.size();i++){
    res.push_back(pos[i]);
    res.push_back(neg[i]);
 }
 return res;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    
    vector<int>ans = bysign(nums);


    for(int x : ans){
        cout<<x<<" ";
    }
    return 0;
}