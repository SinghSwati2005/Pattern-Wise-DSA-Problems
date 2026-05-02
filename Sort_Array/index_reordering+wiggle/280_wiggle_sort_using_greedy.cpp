#include<bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int>&nums){
    for(int i =1;i<nums.size();i++){
    
        if((i%2==0 && nums[i]>nums[i-1]) || (i%2==1 && nums[i]<nums[i-1])){
swap(nums[i],nums[i-1]);
        }
    }
}


// //class Solution {
// public:
//     void wiggleSort(vector<int>& nums) {
//         for (int i = 1; i <nums.size(); i++) {
//             if ((i % 2) ^ (nums[i] > nums[i - 1])) {
//                 swap(nums[i], nums[i - 1]);
//             }
//         }
//     }
// }; optimised version



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
