class Solution {
public:
    int maxRepeating(string sequence, string word) {
      int count=0;
      string w=word;
      while(true)
      {
     if(sequence.find(w)!=string::npos)
      {
        count++;
        w+=word;
      }
      else{
        break;
      }
      }
      return count;
    }
};