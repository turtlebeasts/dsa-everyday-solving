class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writePos = 2;
        if(nums.size()<=2) return nums.size();
        for(int i=2;i<nums.size();i++){
            if(nums[i]!=nums[writePos-2]){
                nums[writePos]=nums[i];
                writePos++;
            }
        }
        return writePos;
    }
};