class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int n = nums.size();
        int minSoFar = nums[n-1];
        int maxSoFar = nums[0];

        int left = -1;
        int right = -2;

        for(int i=1;i<n;i++){
            maxSoFar = max(maxSoFar, nums[i]);
            if(nums[i]<maxSoFar){
                right = i;
            }
        }

        for(int i=n-2;i>=0;i--){
            minSoFar = min(minSoFar, nums[i]);
            if(nums[i]>minSoFar){
                left = i;
            }
        }

        return right-left+1;
    }
};