class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination) swap(start,destination);
        int total_dis=0;
        int clockwise=0;
         int anticlockwise=0;
        for(int i=0;i<distance.size();i++)
        {
             total_dis+=distance[i];

             if(i>=start && i<destination)
             {
                clockwise+=distance[i];
             }

              anticlockwise=total_dis-clockwise;



        }
        return min(clockwise,anticlockwise);
    }
};