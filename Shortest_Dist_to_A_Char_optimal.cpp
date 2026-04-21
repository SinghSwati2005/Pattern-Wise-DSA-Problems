#include<iostream>
#include<vector>
#include <climits>
using namespace std;


vector<int> shortestToChar(string s , char c){
    int n = s.length();
    vector<int>ans(n, n);

    //left to right
int prev = -n;
    for(int i =0;i<n;i++){
        
            if(s[i]==c) {
                prev=i;    }
                ans[i]=i-prev;
        
    }

    //right to left

    prev = 2*n;
    for(int i =n-1;i>=0;i--){
        if(s[i]==c) prev =i;
        ans[i] =min(ans[i],prev-i);
    }
    return ans;

}

int main(){
  string s ;char c;
  cin>>s>>c;

  vector<int>ans = shortestToChar(s,c);
  cout<<"[";
  for(int i =0;i<ans.size();i++){
    cout<<ans[i]<<" , ";

  }
  cout<<"]";
  return 0; 
}