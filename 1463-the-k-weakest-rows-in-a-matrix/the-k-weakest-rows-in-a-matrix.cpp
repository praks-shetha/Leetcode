class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>soldiercount;
        for(int i=0;i<mat.size();++i)
        {
            int count=count_if(mat[i].begin(),mat[i].end(),[](int x){return x==1;});
            soldiercount.push_back({count,i});
        }
        sort(soldiercount.begin(),soldiercount.end());
        vector<int>result;
        for(int i=0;i<k;++i)
        {
            result.push_back(soldiercount[i].second);
        }
        return result;
    }
};