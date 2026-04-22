#include<iostream>
#include<vector>
using namespace std;

int turbulent_longest_max(vector<int>&nums){
    int n = nums.size();
    int up=1;
    int down =1;
    int longest =1;
    for(int i =1;i<n;i++){
        if(nums[i]>nums[i-1]) {
            up = down+1;
            down=1;
        }
       else if(nums[i]<nums[i-1]) {
            down = up+1;
            up=1;
        }
        else{
            up = down =1;
        }
        longest = max(longest, max(up,down));

    }

    return longest;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<turbulent_longest_max(nums)<<" ";
    return 0;
}
