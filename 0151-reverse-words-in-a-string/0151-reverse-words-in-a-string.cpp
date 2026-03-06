class Solution {
public:
    vector<string> extractWords(string s){
        vector<string> result;
        string word = "";
        for(char c: s){
            if(c!=' '){
                word+=c;
            }else if(c==' ' && word!=""){
                result.push_back(word);
                word="";
            }
        }
        if(word!="") {
            result.push_back(word);
        }
        return result;
    }
    string reverseWords(string s) {
        string result = "";
        vector<string> words = extractWords(s);
        int i=0;
        int j=words.size()-1;
        while(i<j){
            string temp = words[i];
            words[i]=words[j];
            words[j]=temp;
            i++;
            j--;
        }
        
        for(int i=0;i<words.size();i++){
            if(i==words.size()-1){
                result+=words[i];
            }else{
                result+=words[i]+" ";
            }
        }
        return result;
    }
};