class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        int count = 0;
        sort(g.begin(), g.end());
        sort(s.begin(), s.end());


        int n = min(g.size(), s.size());

        int l = 0;
        for(int i=0;i<s.size();i++){
            if(l<g.size() && s[i]>=g[l]){
                l++;
                count++;
            }
        }
        return count;
    }
};