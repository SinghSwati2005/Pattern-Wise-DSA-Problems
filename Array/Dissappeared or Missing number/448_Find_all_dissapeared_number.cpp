#include<iostream>
#include<vector>
using namespace std;

vector<int>findmissing(vector<int>&nums){
    int n = nums.size();
    vector<int>res;
    vector<bool>seen(n+1,false);
    for(int num : nums){
        seen[num]=true;
    }
    for(int i =1;i<=n;i++){
        if(!seen[i]) res.push_back(i);
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
    vector<int>res = findmissing(nums);
    for(int i =0;i<res.size();i++){
        cout<<res[i]<<" ";

    }
    return 0;
}