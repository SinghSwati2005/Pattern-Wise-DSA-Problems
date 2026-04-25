#include<bits/stdc++.h>
using namespace std;

bool palindrome(string s){
    int i =0;
    int j=s.length()-1;

    while(i<j){
        if(!isalnum(s[i])) i++;
       else if(!isalnum(s[j])) j--;
      else  if(tolower(s[i])!=tolower(s[j])) return false;
      else{
        i++;
        j--;
      }
     
    }

     return true;
}

int main(){
    string s;
    getline(cin,s);
    cout<<((palindrome(s))?"true":"false")<<" ";
    return 0;
}