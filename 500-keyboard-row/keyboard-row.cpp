class Solution {
public:
    vector<string> findWords(vector<string>& words) {
unordered_set<char>row1={'q','Q','w','W','e','E','r','R','t','T','y','Y','u','U','i','I','o','O','p','P'};
    unordered_set<char>row2={'a','A','s','S','d','D','f','F','G','g','h','H','j','J','k','K','l','L'};
        unordered_set<char>row3={'z','Z','x','X','c','C','v','V','b','B','n','N','m','M'};
   vector<string>result;
        for(string word:words)
        {
            unordered_set<char>* row;
            if(row1.count(word[0]))row=&row1;
            else if(row2.count(word[0]))row=&row2;
            else if (row3.count(word[0]))row=&row3;

        bool isValid=true;
            for(char c:word)
            {
                if(!row->count(c))
                {
                isValid=false;
                break;
                }
            }
            if(isValid)
            result.push_back(word);
            
        }
       return result;
    }
};