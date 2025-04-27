class Solution {
public:
    int maxNumberOfBalloons(string text) {
        vector<int>result(26,0);
        for(char c: text)
        {
            result[c-'a']++;
        }
        int b=result['b'-'a'];
        int a=result['a'-'a'];
        int l=result['l'-'a']/2;
        int o=result['o'-'a']/2;
        int n=result['n'-'a'];
        return min({b,a,l,o,n});
         

    }
};