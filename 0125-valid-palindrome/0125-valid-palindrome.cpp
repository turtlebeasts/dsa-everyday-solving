class Solution {
public:
    string stripString(string s){
        string result = "";
        for(char c: s){
            c=tolower(c);
            if((c>='a' && c<='z')||(c>='0' && c<='9')){
                result+=c;
            }
        }
        return result;
    }
    bool isPalindrome(string s) {
        string striped = stripString(s);
        int i=0;
        int j=striped.size()-1;
        cout << striped;
        while(i<j){
            if(tolower(striped[i])==tolower(striped[j])){
                i++;
                j--;
            }else{
                return false;
            }
        }
        return true;
    }
};