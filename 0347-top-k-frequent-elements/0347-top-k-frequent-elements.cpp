class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> freq;
        vector<int> ans;
        for(int i: nums){
            freq[i]++;
        }

        while(k){
            int maximum = nums[0];
            int count = 0;
            for(auto &f: freq){
                if(f.second > count){
                    maximum=f.first;
                    count=f.second;
                }
            }
            freq.erase(maximum);
            ans.push_back(maximum);
            k--;
        }

        return ans;
    }
};