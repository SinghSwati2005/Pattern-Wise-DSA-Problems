#include<bits/stdc++.h>
using namespace std;

vector<int>topk(vector<int>&nums , int k){
    int n = nums.size();
    unordered_map<int, int>mpp;
    for(int x : nums) mpp[x]++;


    priority_queue<pair<int, int>>pq;
    for(auto &it : mpp){
        pq.push({it.second , it.first});
    }

    vector<int>res;
    while(k>0){
        res.push_back(pq.top().second);
        pq.pop();
        k--;
    }
    return res;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;

    vector<int>nums(n);
for(int i =0;i<n;i++){
    cin>>nums[i];
}

vector<int>res = topk(nums, k);
for(int x=0; x< res.size();x++){
    cout<<res[x]<<" ";
}
return 0;
}