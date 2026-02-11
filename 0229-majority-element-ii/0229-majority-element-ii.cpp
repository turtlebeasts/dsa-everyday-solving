class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int counting = nums.size()/3;
        unordered_map<int, int> freq;
        vector<int> result;

        for(int i: nums){
            freq[i]++;
        }

        for(auto &f: freq){
            if(f.second>counting) result.push_back(f.first);
        }
        return result;
    }
};