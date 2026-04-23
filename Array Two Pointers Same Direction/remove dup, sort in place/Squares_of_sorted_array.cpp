#include <bits/stdc++.h>
using namespace std;

vector<int> sortedSquares(vector<int>& nums) {
    int n = nums.size();
    vector<int> res;
    int i = 0, j = n - 1;

    while (i <= j) {
        int left = nums[i] * nums[i];
        int right = nums[j] * nums[j];
        if (left > right) {
            res.push_back(left);
            i++;
        } else {
            res.push_back(right);
            j--;
        }
    }
    reverse(res.begin(), res.end()); // reverse to get ascending order
    return res;
}

int main() {
    int n;
    cout << "Enter size of array: ";
    cin >> n;

    vector<int> nums(n);
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    vector<int> ans = sortedSquares(nums);

    cout << "Sorted squares: ";
    for (int x : ans) cout << x << " ";
    cout << endl;

    return 0;
}
