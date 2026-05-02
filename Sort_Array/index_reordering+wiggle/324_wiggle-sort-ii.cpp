#include<bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int>&nums){
   int n = nums.size();
   sort(nums.begin(),nums.end());

   int mid = (n+1)/2;

   vector<int>s1(nums.begin(),nums.begin()+mid);
   vector<int>s2(nums.begin()+mid,nums.end());

   reverse(s1.begin(),s1.end());
   reverse(s2.begin(),s2.end());
int i=0;
int j=0;
   for(int k=0;k<n;k++){
    if(k%2==0){
        nums[k]= s1[i++];
    }
    else{
        nums[k]= s2[j++];
    }
   }
}

/* cleaner __VERSION__
vector<int> sorted = nums;
sort(sorted.begin(), sorted.end());
int n = nums.size();
int mid = (n+1)/2;

int j = mid-1;   // smaller half reversed
int k = n-1;     // larger half reversed

for(int i=0; i<n; i++){
    if(i%2==0) nums[i] = sorted[j--];
    else nums[i] = sorted[k--];
} */


// Time & Space Complexity
// time complexity : O(nlogn)
// space complexity : O(n)


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }
    wiggleSort(nums);
    for (int x : nums) cout << x << " ";
    cout << endl;
    return 0;
}


