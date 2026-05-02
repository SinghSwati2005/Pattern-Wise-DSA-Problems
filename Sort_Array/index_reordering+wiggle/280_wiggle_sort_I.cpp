#include<bits/stdc++.h>
using namespace std;

void wiggleSort(vector<int>&nums){
    priority_queue<int>maxHeap;
    for(int &num : nums){
        maxHeap.push(num);

    }

    for(int  i =1;i<nums.size();i+=2){
        nums[i] = maxHeap.top();
        maxHeap.pop();
    }

    for(int i =0;i<nums.size();i+=2){
        nums[i] = maxHeap.top();
        maxHeap.pop();
    }
}

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


////sort logic code

class Solution {
public:
    void wiggleSort(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = 1; i < nums.size() - 1; i += 2) {
            swap(nums[i], nums[i + 1]);
        }
    }
};

