class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> pq;
        for(int i: nums) pq.push(i);

        int large = -1;
        while(k--){
            large = pq.top();
            pq.pop();
        }
        return large;
    }
};