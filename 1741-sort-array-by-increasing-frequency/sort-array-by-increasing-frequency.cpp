class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
       /* unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            return m[a]==m[b]?a>b:m[a]<m[b];
        });
        return nums;*/


        unordered_map<int,int>m;
        for(auto i:nums)
        {
            m[i]++;
        }
        sort(nums.begin(),nums.end(),[&](int a,int b){
            return m[a]==m[b]?a>b:m[a]<m[b];
        });
        return nums;

    }
};