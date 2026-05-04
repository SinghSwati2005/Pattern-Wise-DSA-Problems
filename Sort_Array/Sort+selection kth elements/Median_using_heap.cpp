//better

//brute force

#include<bits/stdc++.h>
using namespace std;

double findMedian(vector<int>&nums1, vector<int>&nums2){
  vector<int>merged;
  merged.insert(merged.end(),nums1.begin(),nums1.end());
  merged.insert(merged.end(),nums2.begin(),nums2.end());

  priority_queue<int,vector<int>,greater<int>>pq(merged.begin(), merged.end());
  int n = merged.size();
  for (int i = 0; i < (n - 1)/2; i++) pq.pop();

    if (n % 2 == 0) {
        int a = pq.top(); pq.pop();
        int b = pq.top();
        return (a + b) / 2.0;
    } else {
        return pq.top();
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

// Time: O((m+n) log(m+n))

// Space: O(m+n)