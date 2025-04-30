class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int count=0;
        for(int i=0;i<=s.length()-k;i++)
        {
            string sub=s.substr(i,k);
            int value=stoi(sub);
            if(!value==0 && num%value==0)
            {
                count++;
            }

        }
        return count;
    }
};