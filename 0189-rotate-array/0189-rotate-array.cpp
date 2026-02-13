class Solution {
public:
    void reverse(int i, int j, vector<int>& nums){
        while(i<j){
            int temp = nums[i];
            nums[i]=nums[j];
            nums[j]=temp;
            i++;
            j--;
        }
    }
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(0, nums.size()-1, nums);
        reverse(0, k-1, nums);
        reverse(k, nums.size()-1, nums);
    }
};