#include<bits/stdc++.h>
using namespace std;

vector<int>findClosesElement(vector<int>&nums , int k , int x){
    sort(nums.begin(),nums.end(),[&](int a , int b){
        if(abs(a-x)==abs(b-x)) return a<b;
        return abs(a-x)<abs(b-x);
    });

    vector<int>res(nums.begin(),nums.begin()+k);
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
    vector<int> ans = findClosesElement(nums,k,x);
for (int num : ans) cout << num << " ";

    return 0;
}

// Complexity
// Sorting by closeness: O(n log n)

// Sorting the result: O(k log k)

// Overall: O(n log n) and space is O(n) (brute-force style).
