class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> result;

        for(int i: nums) freq[i]++;

        priority_queue<pair<int, int>> pq;

        for(auto &f: freq){
            pq.push({f.second, f.first});
        }

        while(k--){
            result.push_back(pq.top().second);
            pq.pop();
        }

        return result;
    }
};