class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {

        int currentSum = 0;
        double maxAvg = -1e9;

        for(int i = 0; i < nums.size(); i++){

            currentSum += nums[i];

            if(i >= k - 1){

                double avg = (double)currentSum / k;
                maxAvg = max(maxAvg, avg);

                currentSum -= nums[i - k + 1];
            }
        }

        return maxAvg;
    }
};