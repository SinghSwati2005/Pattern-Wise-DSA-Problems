#include<iostream>
#include<vector>
using namespace std;

bool checkDistance(string s , vector<int>& distance){
int n = s.length();
for(int i =0;i<n;i++){
    for(int j =i+1;j<n;j++){
        if(s[j]==s[i]){
            int gap = j-i-1;
            int idx = s[i]-'a';
            if(gap!=distance[idx]) return false;

            break;
        }
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