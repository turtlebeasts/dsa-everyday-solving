class Solution {
public:
    int minPartitions(string n) {
        char mx = '0';
        for (char c : n)
            mx = max(mx, c);
        return mx - '0';
    }
};