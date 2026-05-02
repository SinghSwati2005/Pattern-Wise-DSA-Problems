#include <bits/stdc++.h>
using namespace std;

int findkthsmallest(vector<vector<int>>& matrix, int k) {
    priority_queue<int, vector<int>, greater<int>> pq;
    int n = matrix.size();
    int m = matrix[0].size();

    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            pq.push(matrix[i][j]);
        }
    }

    int f = k - 1;
    while(f) {
        pq.pop();
        f--;
    }
    return pq.top();
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
/* Time: O(M * N * logK), where M <= 300 is the number of rows, N <= 300 is the number of columns.
Space: O(K), space for heap which stores up to k elements. */