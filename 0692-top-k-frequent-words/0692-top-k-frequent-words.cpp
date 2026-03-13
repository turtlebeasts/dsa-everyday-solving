class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string, int> freq;

        for(string s : words) 
            freq[s]++;

        vector<string> result;

        while(k){
            string most = "";
            int count = 0;

            for(auto &f : freq){
                if(f.second > count || (f.second == count && f.first < most)){
                    most = f.first;
                    count = f.second;
                }
            }

            result.push_back(most);
            freq.erase(most);
            k--;
        }

        return result;
    }
};
