class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        
       unordered_map<int,int>result;
       int n=nums.size();
       for(int i=0;i<n;i++)
       {
        int num=nums[i];
        if(result.find(num)!=result.end() && i-result[num]<=k)
        {
            return true;
        }
        result[num]=i;

               }
               return false;
    }
};