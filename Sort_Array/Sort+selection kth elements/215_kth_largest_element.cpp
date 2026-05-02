#include<bits/stdc++.h>
using namespace std;

int findkthlargest(vector<int>&nums , int k){
int n = nums.size();
priority_queue<int>pq;
for(int i =0;i<n;i++){
pq.push(nums[i]);
}
int f = k-1;
while(f>0){
    pq.pop();
    f--;
}
return pq.top();
}


int main(){
    int n,k;
    cin>>n>>k;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }

    cout<<findkthlargest(nums,k)
<<" ";
return 0;
}