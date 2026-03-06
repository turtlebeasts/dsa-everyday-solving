class Solution {
public:
    // space complexity O(n) time complexity O(n)
    int singleNumber(vector<int>& nums) {
        unordered_map<int, int> freq;
        for(int i: nums){
            freq[i]++;
        }

        for(auto i: freq){
            if(i.second==1) return i.first;
        }
        return -1;
    }
    //time Complexity O(n^2) space complexity O(1)
    // int singleNumber(vector<int>& nums) {
    //     for(int i=0;i<nums.size();i++){
    //         bool isUnique=true;
    //         for(int j=0;j<nums.size();j++){
    //             if(i!=j && nums[i]==nums[j]){
    //                 isUnique=false;
    //             }
    //         }
    //         if(isUnique) return nums[i];
    //     }
    //     return -1;
    // }
};