class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> count(nums.size()+1, 0);
        vector<int> result;
        for(int i: nums){
            count[i]++;
        }

        for(int i=1;i<=nums.size(); i++){
            if(count[i]==0){
                result.push_back(i);
            }
        }
        return result;
    }
};