#include<bits/stdc++.h>
using namespace std;

vector<int> freqsort(vector<int>&nums){
    unordered_map<int,int>mpp;
    for(int  x : nums){
        mpp[x]++;
    }

    auto cmp =[&](int a , int b){
        if(mpp[a]==mpp[b]) return a>b;
        return mpp[a]<mpp[b];
    };
    sort(nums.begin(),nums.end(),cmp);
    return nums;
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }

    vector<int>res = freqsort(nums);


    for (int x : res) cout << x << " ";
    cout << endl;
    return 0;
}