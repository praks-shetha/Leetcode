class Solution {
public:
    vector<string> sortPeople(vector<string>& names, vector<int>& heights) {
        vector<pair<int,string>> people;
        int n=names.size();
        for (int i = 0; i < n; i++) {
            people.push_back({heights[i], names[i]});
        }
        sort(people.begin(),people.end(),[&](auto &a,auto &b){
            return a.first>b.first;
        });
        vector<string>res;
        for(auto i:people)
        {
            res.push_back(i.second);
        }
            
       
       return res;
    }
};