#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    void merge(vector<pair<int,int>>& arr, int low, int mid, int high, vector<int>& res) {
        vector<pair<int,int>> temp;
        int left = low, right = mid+1;

        while (left <= mid && right <= high) {
            if (arr[left].first <= arr[right].first) {
                temp.push_back(arr[right++]);
            } else {
                // arr[left].first > arr[right].first
                // means arr[left] has one smaller element to its right
                res[arr[left].second] += (high - right + 1);
                temp.push_back(arr[left++]);
            }
        }
        while (left <= mid) temp.push_back(arr[left++]);
        while (right <= high) temp.push_back(arr[right++]);

        for (int i = low; i <= high; i++) arr[i] = temp[i - low];
    }

    void mergeSort(vector<pair<int,int>>& arr, int low, int high, vector<int>& res) {
        if (low >= high) return;
        int mid = (low + high) / 2;
        mergeSort(arr, low, mid, res);
        mergeSort(arr, mid+1, high, res);
        merge(arr, low, mid, high, res);
    }

    vector<int> countSmaller(vector<int>& nums) {
        int n = nums.size();
        vector<int> res(n, 0);
        vector<pair<int,int>> arr;

        for (int i = 0; i < n; i++) arr.push_back({nums[i], i});

        mergeSort(arr, 0, n-1, res);
        return res;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++) cin >> nums[i];
    Solution obj;
    vector<int> ans = obj.countSmaller(nums);
    for (int x : ans) cout << x << " ";
    cout << endl;
    return 0;
}
