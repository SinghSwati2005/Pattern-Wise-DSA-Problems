#include<bits/stdc++.h>
using namespace std;


vector<int>sortByFreq(vector<int>&nums){
    unordered_map<int,int>mpp;
    for(int x : nums){
        mpp[x]++;
    }

    auto cmp = [&](int a , int b){
        if(mpp[a]==mpp[b]) return a<b;
        return mpp[a]>mpp[b];
    };

    sort(nums.begin(),nums.end(),cmp);
    return nums;
}

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) cin >> arr[i];

    
    vector<int> ans = sortByFreq(arr);

    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}

//o(nlogn)