#include<iostream>
#include<vector>
using namespace std;

vector<int> finddups(vector<int>&nums){
    int n = nums.size();
vector<int>res;
    for(int i =0;i<n;i++){
        int val = abs(nums[i]);
        if(nums[val-1]<0){
            res.push_back(val);
        }
        else{
            nums[val-1]= -nums[val-1];
        }
    }
    return res;
    
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    
        vector<int>ans = finddups(nums);
        for(int i =0;i<ans.size();i++){
            cout<<ans[i]<<" ";
        }


    
    return 0;
}

// tc - O(nlogn)
// tc - O(1)