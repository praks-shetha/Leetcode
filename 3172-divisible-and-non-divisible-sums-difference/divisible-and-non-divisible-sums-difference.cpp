class Solution {
public:
    int differenceOfSums(int n, int m) {
        int isnotdiv=0;
        int isdiv=0;
        for(int i=1;i<=n;i++)
        {
            if(i%m!=0)
            {
                isnotdiv+=i;
            }
           else
           {
                isdiv+=i;
           }
          
            
        }
         int ans=isnotdiv-isdiv;
        return ans ;
    }
};