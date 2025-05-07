class Solution {
public:
    int maxContainers(int n, int w, int maxWeight) {
        int totalcells=n*n;
         maxWeight=maxWeight/w;
        return min(totalcells,maxWeight);
    }
};