#include<bits/stdc++.h>
using namespace std;

string frequencySort(string s){
    unordered_map<char , int>mpp;
    for(char c :s){
        mpp[c]++;
    }
    int n = s.size();
    vector<vector<char>> buckets(n+1);
    for(auto &it : mpp){
        char ch = it.first;
        int count = it.second;

        buckets[count].push_back(ch);
    }

    string res = "";
    for(int i =n;i>=1;i--){
        for(char ch : buckets[i]){
            res+=string(i,ch);
        }
    }
    return res;
}
int main(){
    string s;
    cin>>s;
    cout<<frequencySort(s)<<" ";
    return 0;
}