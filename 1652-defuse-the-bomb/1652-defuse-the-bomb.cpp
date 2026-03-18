class Solution {
public:
    vector<int> decrypt(vector<int>& code, int k) {
        int n = code.size();
        vector<int> result(n, 0);
        vector<int> extended(2*n, 0);

        if(k==0) return result;

        for(int i=0; i<2*n; i++){
            extended[i]=code[i%n];
        }

        int windowSum = 0;
        int start, end;

        if (k > 0) {
            start = 1;
            end = k;
        } else {
            start = n + k;
            end = n - 1;
        }

        for (int i = start; i <= end; i++) {
            windowSum += extended[i];
        }

        for (int i = 0; i < n; i++) {
            result[i] = windowSum;

            windowSum -= extended[start];
            start++;

            end++;
            windowSum += extended[end];
        }

        return result;
    }
};