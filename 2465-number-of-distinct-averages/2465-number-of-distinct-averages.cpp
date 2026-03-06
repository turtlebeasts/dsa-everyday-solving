class Solution {
public:
    int distinctAverages(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        set<float> avgs;
        int i=0;
        int j=nums.size()-1;

        while(i<j){
            avgs.insert(((float)nums[i]+(float)nums[j])/2);
            i++;
            j--;
        }
        return avgs.size();
    }
};