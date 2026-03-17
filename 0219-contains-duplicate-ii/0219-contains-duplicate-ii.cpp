class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int i = 0, j = 0;
        unordered_set<int> seen;
        while(j<nums.size()){
            if(seen.count(nums[j])) return true;
            seen.insert(nums[j]);
            if(j>=k){
                seen.erase(nums[i]);
                i++;
            }
            j++;
        }
        return false;
    }
};