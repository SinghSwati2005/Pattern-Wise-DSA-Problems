#include<bits/stdc++.h>
using namespace std;




    int longestContinuousSubstring(string s) {
      int n = s.length();
      int longest =1;
      int i =0;
     while(i<n){
        int up=0;
        while(i+1<n && s[i+1]>s[i]){up++;i++;}
        if(up>0){
            longest= max(longest,up+1);
        }
        else i++;
     }
      return longest; 
    }


int main(){
    string s;
    cin>>s;
    cout<<longestContinuousSubstring(s)<<" ";
    return 0;

}