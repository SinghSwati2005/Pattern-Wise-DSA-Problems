#include<bits/stdc++.h>
using namespace std;


int maxArea(vector<int>& height){
    int maxwater =0;
    int lp=0;
    int rp= height.size()-1;
while(lp<rp){
    int width = rp-lp;
    int ht = min(height[lp],height[rp]);
    int currwater = width*ht;

    maxwater = max(maxwater,currwater);
    height[lp]<height[rp]?lp++:rp--;
}
return maxwater;
}


int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
    cout<<maxArea(nums)<<" ";
    return 0;
}