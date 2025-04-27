class Solution {
public:
    int commonFactors(int a, int b) {
        int factor_count=0;
       int ans_gcd=__gcd(a,b);
       for(int i=1;i<ans_gcd+1;i++)
       {
       if(ans_gcd%i==0)
       ++factor_count;
       }
       return factor_count;

    }
};