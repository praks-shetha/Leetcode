class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        vector<int> result(26,0);
        for(char c:magazine)
        {
            result[c-'a']++;
        }
        for(char c:ransomNote)
        {
           
           if(result[c-'a']==0)
           {
           return false;
           }
            result[c-'a']--;
        }
        return true;
       
    }
};