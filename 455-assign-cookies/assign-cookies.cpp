class Solution {
public:
    int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(),g.end());
        sort(s.begin(),s.end());
        int gcount=0;int scount=0;
        while(gcount<g.size()&&scount<s.size())
        {
            if(s[scount]>=g[gcount])
            {
                gcount++;
            }
            scount++;
        }
        return gcount;
    }
};