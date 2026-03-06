class Solution {
public:
    vector<int> gardenNoAdj(int n, vector<vector<int>>& paths) {
        vector<vector<int>> adj(n);
        for (auto &p : paths) {
            adj[p[0] - 1].push_back(p[1] - 1);
            adj[p[1] - 1].push_back(p[0] - 1);
        }

        vector<int> res(n, 0);

        for (int i = 0; i < n; i++) {
            vector<bool> used(5, false);

            for (int nei : adj[i]) {
                if (res[nei] != 0)
                    used[res[nei]] = true;
            }

            for (int flower = 1; flower <= 4; flower++) {
                if (!used[flower]) {
                    res[i] = flower;
                    break;
                }
            }
        }
        return res;
    }
};
