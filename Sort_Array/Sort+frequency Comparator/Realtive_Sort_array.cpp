#include<bits/stdc++.h>
using namespace std;

vector<int>relativeSortArray(vector<int>& nums1 , vector<int>&nums2){
    unordered_map<int,int>mpp;
    for(int i : nums1){
        mpp[i]++;
    }
vector<int>res;
    for(int x : nums2 ){
        while(mpp[x]>0){
         res.push_back(x);
         mpp[x]--;
        }
    }

    vector<int>rem;
    for(auto& it : mpp){
while(it.second>0){
    rem.push_back(it.first);
    it.second--;
}
    }

    sort(rem.begin(),rem.end());
    res.insert(res.end(),rem.begin(),rem.end());
    return res;
}

int main(){
    int n,m;
    cin>>n>>m;
    vector<int>nums1(n);
    vector<int>nums2(m);

    for(int i =0;i<n;i++){
        cin>>nums1[i];
    }
    for(int i =0;i<m;i++){
        cin>>nums2[i];
    }

    vector<int>res= relativeSortArray(nums1,nums2);
    for(int i =0;i<res.size();i++){
        cout<<res[i]<<" ";
    }
    return 0;
}