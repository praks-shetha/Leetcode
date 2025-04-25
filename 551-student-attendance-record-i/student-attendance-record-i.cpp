class Solution {
public:
    bool checkRecord(string s) {
        int ac=0;
        int lc=0;
        for(char c:s)
        {
            if(c=='A')
             {
                ++ac;
                if(ac>=2)
                return false;
                lc=0;
             }
             else if(c=='L')
             {
                 ++lc;
                 if(lc>=3)
                 return false;
             }
             else
             {
                lc=0;
             }
        }
        return true;
    }
};