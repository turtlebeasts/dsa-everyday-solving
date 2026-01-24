class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int maximum = 0;
        int currentCount = 0;
        for(int i: nums){
            if(i==1){
                currentCount++;
            }else{
                maximum=max(maximum, currentCount);
                currentCount=0;
            }
        }
        return max(maximum, currentCount);
    }
};