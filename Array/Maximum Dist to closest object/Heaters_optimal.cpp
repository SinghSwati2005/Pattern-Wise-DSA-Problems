#include<iostream>
#include<vector>
#include<climits>
using namespace std;

int findRadius(vector<int>&houses , vector<int>&heaters){
    int n = houses.size();
    int m = heaters.size();
int i =0;
    int maxi =0;
    for(int h=0;h<n;h++){
        
        while(i<n-1&& abs(heaters[i+1]-houses[h])<=abs(heaters[i]-houses[h])){
            i++;
        }

        int dist = abs(heaters[i]-houses[h]);
        
            
        maxi = max(maxi,dist);
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