#include<iostream>
#include<vector>
using namespace std;

int longest_Mountain(vector<int>&arr){
    int n = arr.size();
    vector<int>inc(n,1),dec(n,1);
    for(int i =1;i<n;i++){
        if(arr[i]>arr[i-1])inc[i]=inc[i-1]+1;
    }
    for(int i =n-2;i>=0;i--){
        if(arr[i]>arr[i+1])dec[i]=dec[i+1]+1;
    }
    int longest =0;
for(int i=0;i<n;i++){
    longest = max(longest, inc[i]+dec[i]-1);

}
return longest;
}
int main(){
    int n ;
    cin>>n;
    vector<int>nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    cout<<longest_Mountain(nums)<<" ";
    return 0;
}

//O(n)
//O(n)