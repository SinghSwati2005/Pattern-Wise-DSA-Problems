#include<bits/stdc++.h>
using namespace std;

vector<int> kthclosest_using_heap(vector<int> nums, int k, int x){
   priority_queue<pair<int, int>,vector<pair<int,int>>,less<pair<int,int>>>pq;
   for(int i =0;i<nums.size();i++){
    int dist = abs(nums[i]-x);
    pq.push({dist,nums[i]});
  if(pq.size()>k){
    pq.pop();
  }

   }

   vector<int>res;
   for(int i =0;i<k;i++){
res.push_back(pq.top().second);
pq.pop();

   }
   sort(res.begin(),res.end());
   return res;
}
int main(){
    int n,k,x;
    cin>>n>>k>>x;

    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    vector<int> ans = kthclosest_using_heap(nums,k,x);
for (int num : ans) cout << num << " ";

    return 0;
}