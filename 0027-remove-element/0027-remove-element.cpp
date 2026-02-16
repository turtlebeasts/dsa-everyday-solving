class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int writePos = 0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=val){
                nums[writePos]=nums[i];
                writePos++;
            }
        }
        return writePos;
    }
};