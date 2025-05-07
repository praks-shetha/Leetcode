class Solution {
public:
    vector<int> zigzagTraversal(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();
        vector<int>result;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                for(int j=0;j<m;j++)
                {
                    result.push_back(grid[i][j]);
                }
            }
            else
            {
                for(int j=m-1;j>=0;j--)
                {
                    result.push_back(grid[i][j]);
                }
            }
           
        }
         vector<int>answer;
            for(int i=0;i<result.size();i+=2)
            {
                answer.push_back(result[i]);
            }
        return answer;
    }
};