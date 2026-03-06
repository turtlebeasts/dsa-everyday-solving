#include <map>
using namespace std;
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> s;
        for(int i: nums){
            s.insert(i);
        }

        int idx=0;
        for(int i: s){
            nums[idx++]=i;
        }
        return idx;
    }
};