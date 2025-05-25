class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination)swap(start,destination);
        int total=0;int anticlock=0;int clock=0;
       
        for(int i=0;i<distance.size();i++)
        {
            total+=distance[i];//total dis
            if(i>=start && i<destination)//to find clock 
            {
                clock+=distance[i];
            }
            anticlock=total-clock; //if total is 10 then clock is 6 the anticlock will be that
        }
        return min(clock,anticlock);
    }
};