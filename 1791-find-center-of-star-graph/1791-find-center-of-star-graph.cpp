class Solution {
public:
    int findCenter(vector<vector<int>>& edges) {
        vector<int> connections(edges.size()+2,0);
        int maximum = -1;
        int maxElement=0;
        for(auto &e: edges){
            connections[e[0]]++;
            connections[e[1]]++;
        }

        for(int i=0;i<connections.size();i++){
            if(maximum<connections[i]){
                maximum = connections[i];
                maxElement=i;
            }
        }
        return maxElement;
    }
};