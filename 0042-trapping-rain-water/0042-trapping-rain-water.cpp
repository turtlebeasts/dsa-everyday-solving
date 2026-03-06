class Solution {
public:
    int trap(vector<int>& height) {
        int n = height.size();
        vector<int> leftMax(n, 0);
        vector<int> rightMax(n, 0);
        vector<int> minLR(n, 0);

        int maxHeight = 0;
        for(int i=0;i<n;i++){
            leftMax[i]=maxHeight;
            maxHeight = max(height[i], maxHeight);
        }
        maxHeight = 0;
        for(int i=n-1;i>=0;i--){
            rightMax[i]=maxHeight;
            maxHeight = max(height[i], maxHeight);
        }

        for(int i=0;i<n;i++){
            minLR[i] = min(leftMax[i], rightMax[i]);
        }

        int water = 0;
        for(int i=0;i<n;i++){
            int current = minLR[i]-height[i];
            if(current>0){
                water+=current;
            }
        }
        return water;
    }
};