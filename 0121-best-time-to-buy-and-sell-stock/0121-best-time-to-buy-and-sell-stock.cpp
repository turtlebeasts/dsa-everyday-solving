class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxP = 0;
        int minimum = prices[0];

        for(int num: prices){
            if(num<minimum){
                minimum=num;
            }

            int profit = num-minimum;

            if(profit>maxP){
                maxP=profit;
            }
        }
        return maxP;
    }
};