class Solution {
public:
    bool rotateString(string s, string goal) {
        string doubled=s+s;
        if(s.size()!=goal.size())
        return false;
        int n=s.size();
        int count[26]={0};
        for(int i=0;i<n;i++)
        {
            ++count[s[i]-97];
           --count [goal[i]-97];
        }
        for(int i=0;i<26;i++)
        {
            if(count[i]!=0)return false;
        }
    
       if(doubled.find(goal)==string::npos)
       {
        return false;
       }
       return true;
        
    }
};