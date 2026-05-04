#include <bits/stdc++.h>
using namespace std;

class KthLargest {
    priority_queue<int, vector<int>, greater<int>> pq; // min-heap
    int K;
public:
    KthLargest(int k, vector<int>& nums) {
        K = k;
        for (int num : nums) {
            pq.push(num);
            if (pq.size() > K) pq.pop(); // keep only K largest
        }
    }
    
    int add(int val) {
        pq.push(val);
        if (pq.size() > K) pq.pop(); // maintain size K
        return pq.top(); // kth largest
    }
};

int main() {
    int k, n;
    cin >> k >> n; // first input: k, then number of initial elements
    
    vector<int> nums(n);
    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }
    
    KthLargest obj(k, nums);
    
    int q; 
    cin >> q; // number of queries (values to add)
    while (q--) {
        int val;
        cin >> val;
        cout << obj.add(val) << "\n";
    }
    
    return 0;
}
