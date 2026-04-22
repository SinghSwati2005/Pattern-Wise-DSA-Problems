#include<iostream>
#include<vector>
using namespace std;
int longest_cont_inc_subseq(vector<int>&arr){
    int n = arr.size();
    int longest =1;
    int i =0;

    while(i<n){
        int up=0;
        while(i+1<n && arr[i+1]>arr[i]) {up++; i++;}

        if(up>0){
            longest = max(longest, up+1);
        }
        else {
            i++;
        }
        
    }
    return longest;
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

    cout << longest_cont_inc_subseq(nums) << " ";
    return 0;
}
