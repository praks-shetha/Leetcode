class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
       int maxsum=0;
       for(int i=0;i<accounts.size();i++)
       {
        int currentsum=0;
        for(int j=0;j<accounts[i].size();j++)
        {
            currentsum+=accounts[i][j];
        }
        maxsum=max(currentsum,maxsum);
       } 
       return maxsum;
    }
};