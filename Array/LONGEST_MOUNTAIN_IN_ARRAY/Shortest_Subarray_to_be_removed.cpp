#include<bits/stdc++.h>
using namespace std;

int Shortest_subarray_to_be_removed(vector<int>&nums){
int n = nums.size();
int left =0;
while(left +1 < n && nums[left]<=nums[left+1]) left++;
if(left == n-1) return 0;
int right = n-1;
while(right>0 && nums[right-1]<=nums[right]) right--;
int ans  = min((n-left-1),right);
int i =0;
int j =right;
while(i<=left && j<n){
    if(nums[i]<=nums[j]){
        ans = min(ans, j-i-1);
        i++;
    }
    else{
        j++;
    }
}
return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }

    cout << Shortest_subarray_to_be_removed(nums) << " ";
    return 0;
}