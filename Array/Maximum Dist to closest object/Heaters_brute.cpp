#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findRadius(vector<int>&houses , vector<int>&heaters){
    int n = houses.size();
    int m = heaters.size();

    int maxi =0;
    for(int i=0;i<n;i++){
        int radiusmin=INT_MAX;
        for(int j =0;j<m;j++){
          int  mindist = abs(houses[i]-heaters[j]);
            radiusmin = min(radiusmin, mindist);
        }
        maxi = max(maxi,radiusmin);
    }

    return maxi;
}

int main(){
    int n , m;
    cin>>n>>m;
    vector<int>houses(n);
    vector<int>heaters(m);

    for(int i=0;i<n;i++){
        cin>>houses[i];
    }
    for(int i=0;i<m;i++){
        cin>>heaters[i];
    }

    cout<<findRadius(houses,heaters)<<"";
    return 0;
}