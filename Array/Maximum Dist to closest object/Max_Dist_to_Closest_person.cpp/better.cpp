#include<iostream>
#include<vector>
#include<algorithm>
#include <climits>
using namespace std;

int maxDistClosestPerson(vector<int>&seats){
    int n = seats.size();
    vector<int>left(n,INT_MAX);
    vector<int>right(n,INT_MAX);
int dist = INT_MAX;
    for(int i =0;i<n;i++){
        if(seats[i]==1){
            dist = 0;

        }
        else if(seats[i]!=INT_MAX){
            dist++;
        }
        left[i] = dist;
    }



    for(int i =n-1;i>=0;i--){
        if(seats[i]==1){
            dist = 0;

        }
        else if(seats[i]!=INT_MAX){
            dist++;
        }
        right[i] = dist;
    }

int ans =0;
    for(int i =0;i<n;i++){
        if(seats[i]==0){
            int closest = min(left[i],right[i]);
            ans = max(ans,closest);
            
        }

    }
    return ans;
}

int main(){
    int n;
    cin>>n;
    vector<int>nums(n);
    for(int i =0;i<n;i++){
        cin>>nums[i];

    }
    cout<<maxDistClosestPerson(nums)<<" ";
    return 0;
}

// tc - o(n)
//sc = o(n) bcz of extra arrays