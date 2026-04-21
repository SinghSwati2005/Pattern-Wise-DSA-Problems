#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

bool CanPlaceFlowers(vector<int>&flowers,int n){
    int m = flowers.size();
    int cnt=0;
    for(int i =0;i<m;i++){
        if(flowers[i]==0){
            bool left = (i==0) || flowers[i-1] ==0;
            bool right = (i==m-1) || flowers[i+1] ==0;
            if(left && right){
                flowers[i] = 1;
                cnt++;
                if(cnt>=n) return true;
            }
        }
    }
    return cnt>=n;
}

int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];
    }
   cout << (CanPlaceFlowers(nums, k) ? "true" : "false");
  return 0;
}

// tc - o(n)
// sc = o(1)