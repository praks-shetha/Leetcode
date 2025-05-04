class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {
        vector<string>codes={".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        unordered_set<string>result;
        for(const string&word:words)
        {
            string toadd="";
            for(char chars:word)
            {
                toadd+=codes[chars-'a'];
            }
            result.insert(toadd);
        }
        return result.size();
    }
};