class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> ans;
        int size = nums.size();
        for(int i=0;i<size*2;i++){
            ans.push_back(nums[i%size]);
        }
        return ans;
    }
};