class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        vector<int> result(arr.size(), 0);
        int writePos = 0;
        for(int i: arr){
            if(i!=0){
                result[writePos++]=i;
            }else{
                writePos+=2;
            }
            if(writePos>=arr.size()) break;
        }
        for(int i=0;i<arr.size();i++){
            arr[i]=result[i];
        }
    }
};