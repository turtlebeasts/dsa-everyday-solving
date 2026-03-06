class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        set<int> intersections;
        set<int> result;
        vector<int> res;
        for(int i: nums1){
            intersections.insert(i);
        }

        for(int i: nums2){
            if(intersections.count(i)){
                result.insert(i);
            }
        }

        for(int i: result){
            res.push_back(i);
        }

        return res;
    }
};