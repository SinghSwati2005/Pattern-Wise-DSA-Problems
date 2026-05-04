//brute force

#include<bits/stdc++.h>
using namespace std;

double findMedian(vector<int>&nums1, vector<int>&nums2){
    vector<int>merged;
    merged.reserve(nums1.size()+nums2.size());
    merged.insert(merged.end(),nums1.begin(),nums1.end());
    merged.insert(merged.end(),nums2.begin(),nums2.end());
    sort(merged.begin(),merged.end());
    int n = merged.size();
    if(n%2==0){
        return (merged[n/2]-2+ merged[n/2])/2.0;
    }
    else{
        return merged[n/2];
    }
}
int main(){
    int n,m;
    cin>>n>>m;
    vector<int>nums1(n);
    for(int i =0;i<n;i++){
        cin>>nums1[i];
    }
    vector<int>nums2(m);
    for(int i =0;i<m;i++){
        cin>>nums2[i];
    }
    cout<<findMedian(nums1,nums2)<<" ";
    return 0;

}