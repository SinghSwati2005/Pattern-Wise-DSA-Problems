#include<bits/stdc++.h>
using namespace std;

int removeDup(vector<int>&nums){
    int n = nums.size();
    int k =0;
    int cnt =1;
    for(int i =1;i<n;i++){
        if(nums[i]==nums[k]){
            if(cnt<2){
                k++;
                nums[k]=nums[i];
                cnt++;
            }
        }
        else{
            k++;
            nums[k]=nums[i];
            cnt=1;
        }
    }
    return k+1;
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
for(int i =0;i<n;i++){
    cin>>nums[i];
}
cout<<removeDup(nums)<<" ";
return 0;
}