class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        unordered_set<string>bannedset(banned.begin(),banned.end());
        for(char& ch:paragraph)
        {
            if(isalpha(ch))
            {
            ch=tolower(ch);//if char cange to lowecase 
            }
            else
            {
                ch=' ';//punctuation na space replace pananum
            }
        }
        unordered_map<string,int>freq;
        stringstream ss(paragraph);
        string word;
        while(ss>>word)
        {
            if(!bannedset.count(word))
            {
                freq[word]++;//only non-banned oda freqcount
            }
        }
        int maxcount=0;
        string commonword;
        for(auto& pair:freq)
        {
           if(pair.second>maxcount)
           {
            maxcount=pair.second;
            commonword=pair.first;
           }
           
        }
        return commonword;

    }
};