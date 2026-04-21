#include<iostream>
#include<vector>
using namespace std;

bool checkDistance(string s , vector<int>& distance){
int n = s.length();
vector<int>first(26,-1);
for(int i =0;i<n;i++){
   
       int idx = s[i]-'a';
       if(first[idx]== -1){
        first[idx]=i;
       }
       else{
        int gap = i-first[idx]-1;
        if(gap!=distance[idx]) return false;
       }
    
}
return true;
}

int main(){
    string s;
    cin>>s;
    int n;
    cin>>n;
    vector<int>dist(n);
    for(int i =0;i<n;i++){
        cin>>dist[i];
    }
    cout<<((checkDistance)? "true" : "false");
    return 0;
}