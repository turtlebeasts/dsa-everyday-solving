class Solution {
public:
    int thirdMax(vector<int>& nums) {
        set<int> s;
        for(int i: nums){
            s.insert(i);
        };
        int idx = 0;
        int maximum = 0;
        cout << s.size();
        for(int i: s){
            if(idx==s.size()-3){
                return i;
            }
            maximum = i;
            idx++;
        }
        return maximum;
    }
};