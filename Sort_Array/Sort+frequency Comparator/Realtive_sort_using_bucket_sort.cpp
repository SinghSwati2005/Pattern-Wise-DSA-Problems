#include<bits/stdc++.h>
using namespace std;

vector<int>relativeSortArray(vector<int>& nums1 , vector<int>&nums2){
  vector<int>mpp(1001,0);
    for(int i =0;i<nums1.size();i++){
        mpp[nums1[i]]++;
    }
vector<int>res;
    for(int i =0;i<nums2.size();i++){
       int  x = nums2[i];
       while(mpp[x]>0){
        res.push_back(x);
        mpp[x]--;
       }
    }

    for(int i =0;i<=1000;i++){
        while(mpp[i]>0){
            res.push_back(i);
            mpp[i]--;
        }
    }
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