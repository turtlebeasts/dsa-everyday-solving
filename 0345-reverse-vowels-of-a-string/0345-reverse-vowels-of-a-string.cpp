class Solution {
public:
    string reverseVowels(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u'};
        int i=0;
        int j=s.size()-1;

        while(i<j){
            if(!vowels.count(tolower(s[i]))){
                i++;
            }

            if(!vowels.count(tolower(s[j]))){
                j--;
            }

            if(vowels.count(tolower(s[i])) && vowels.count(tolower(s[j]))){
                char temp = s[i];
                s[i]=s[j];
                s[j]=temp;
                i++;
                j--;
            }
        }
        return s;
    }
};