class Solution {
public:
    void dfs(int n, int k, string &curr, vector<string> &res) {
        if(curr.size() == n) {
            res.push_back(curr);
            return;
        }

        for(char ch : {'a','b','c'}) {
            if(curr.empty() || curr.back() != ch) {
                curr.push_back(ch);
                dfs(n,k,curr,res);
                curr.pop_back();
            }
        }
    }

    string getHappyString(int n, int k) {
        vector<string> res;
        string curr = "";

        dfs(n,k,curr,res);

        if(res.size() < k) return "";
        return res[k-1];
    }
};