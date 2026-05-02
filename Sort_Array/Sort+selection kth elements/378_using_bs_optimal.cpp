#include <bits/stdc++.h>
using namespace std;
int countlessEqual(vector<vector<int>>& matrix, int mid){
    int n = matrix.size();
    int cnt = 0 , row = n-1, col=0;

    while(row>=0 && col<n){
        if(matrix[row][col]<=mid){
            cnt += row+1;
            col++;
        }
        else{
            row--;
        }
    }
    return cnt;
}

int findkthsmallest(vector<vector<int>>& matrix, int k) {
 int n = matrix.size();
 int left = matrix[0][0], right = matrix[n-1][n-1];

 while(left<right){
    int mid = left+ (right - left)/2;
    int count = countlessEqual(matrix,mid);

    if(count <k) left = mid+1;
    else right = mid;

 }
 return left;

}



int main() {
    int n, m, k;
    cin >> n >> m >> k;
    vector<vector<int>> matrix(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> matrix[i][j];
        }
    }

    cout << findkthsmallest(matrix, k) << " ";
    return 0;
}


//Complexity:
/* Complexity
Time: O(n log(max-min))

log(max-min) iterations × O(n) counting.

Space: O(1). */