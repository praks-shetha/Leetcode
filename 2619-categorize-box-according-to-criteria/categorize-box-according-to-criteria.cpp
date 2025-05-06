class Solution {
public:
    string categorizeBox(int length, int width, int height, int mass) {
        bool bulky=false;
        bool heavy=false;
if(length>=10000||width>=10000||height>=10000)
   bulky=true;
long long volume=1LL*width*height*length;
if(volume>=1000000000)
 bulky=true;
if(mass>=100)
heavy=true;

        if(bulky&&heavy)return "Both";
        if(bulky)return "Bulky";
        if(heavy)return "Heavy";
        return "Neither";
    }
};