#include<iostream>
#include<vector>
#include <climits>
using namespace std;


vector<int> shortestToChar(string s , char c){
    int n = s.length();
    vector<int>ans(n, INT_MAX);
    for(int i =0;i<n;i++){
        for(int j =0;j<n;j++){
            if(s[j]==c) {
                ans[i] = min(ans[i], abs(i-j));
            }
        }
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