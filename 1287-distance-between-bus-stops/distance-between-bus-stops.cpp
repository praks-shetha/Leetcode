class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination)swap(start,destination);
        int total=0;
        int anticlock=0;
        int clock=0;
        for(int i=0;i<distance.size();i++)
        {
            total+=distance[i];
            if(i>=start && i<destination)
            {
                clock+=distance[i];
            }
            anticlock=total-clock;
        }
        return min(clock,anticlock);
    }
};