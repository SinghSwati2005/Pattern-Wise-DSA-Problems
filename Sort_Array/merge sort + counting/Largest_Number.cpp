#include<bits/stdc++.h>
using namespace std;

static bool mysort(const string &a , const string&b){
    return a+b>b+a;
}


string largestNumber (vector<int>&nums){
    string s = "";
    vector<string>res;

    for(int i =0;i<nums.size();i++){
        int it = nums[i];
        res.push_back(to_string(it));
    }

    sort(res.begin(),res.end(),mysort);
    if(res[0]=="0"){
        return "0";

    }

    for(string a : res){
        s+=a;
    }
    return s;
}

int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }

    cout<<largestNumber(nums)<<" ";
    return 0;
}