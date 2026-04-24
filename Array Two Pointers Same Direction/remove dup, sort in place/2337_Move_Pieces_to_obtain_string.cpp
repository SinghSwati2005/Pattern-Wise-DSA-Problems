#include<bits/stdc++.h>
using namespace std;
bool canChnage(string start , string target){
    int n = start.size();
    int i =0, j=0;
    while(i<n || j<n){
        while(i<n && start[i]=='_') i++;
        while(j<n && target[j]=='_') j++;

        if(i==n || j==n) return i==n && j==n;
        if(start[i]!=target[j]) return false;
        if(start[i]=='L' && i<j) return false;
        if(start[i]=='R' && i>j) return false;
        i++;
        j++;
    }
    return true;
}
int main(){
    string s;
    cin>>s;
    string t;
    cin>>t;
    cout<<(canChnage(s,t)?"true":"false");
    return 0;
}