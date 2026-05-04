//better

//brute force

#include<bits/stdc++.h>
using namespace std;

double findMedian(vector<int>&nums1, vector<int>&nums2){
   int m = nums1.size(), n = nums2.size();
    int total = m + n;
    int i = 0, j = 0;
    int prev = 0, curr = 0;

    for (int count = 0; count <= total/2; count++) {
        prev = curr;
        if (i < m && (j >= n || nums1[i] <= nums2[j])) {
            curr = nums1[i++];
        } else {
            curr = nums2[j++];
        }
    }

    if (total % 2 == 0) return (prev + curr) / 2.0;
    return curr;
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

// Time: O(m+n)

// Space: O(1)