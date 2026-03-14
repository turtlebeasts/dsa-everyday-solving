class Solution {
public:
    int maxVowels(string s, int k) {
        unordered_set<char> vowels = {'a','e','i','o','u'};
        int currentCount = 0;
        int maxCount = 0;

        for(int i=0, j=0;i<s.size();i++){
            if(vowels.count(s[i])) currentCount++;
            if(i>=k){
                if(vowels.count(s[j])) currentCount--;
                j++;
            }
            maxCount = max(currentCount, maxCount);
        }

        return maxCount;
    }
};