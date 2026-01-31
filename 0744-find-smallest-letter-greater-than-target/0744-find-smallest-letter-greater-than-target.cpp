class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int diff = 26;
        char closer;
        for(char c: letters){
            if(0<c-target && c-target<diff){
                diff = c-target;
                closer = c;
            }
        }
        if(diff==26) return letters[0];
        return closer;
    }
};