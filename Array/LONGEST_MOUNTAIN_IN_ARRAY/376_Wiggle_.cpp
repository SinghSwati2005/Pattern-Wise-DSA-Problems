#include<iostream>
#include<vector>
using namespace std;

int wigglemaxlength(vector<int>&nums){
    int n = nums.size();

    int up=1;int down =1;
    for(int i =1;i<n;i++)
{
    if(nums[i]>nums[i-1]){
         up= down+1;
    }
    else if(nums[i]<nums[i-1]){
        down = up+1;
    }
}
return max(up,down);
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    cout << wigglemaxlength(nums) << endl;
    return 0;
}


// O(n)
// o(1);