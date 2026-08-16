class Solution {
public:
    int trap(vector<int>& height) {
        
        int l=0;
        int r= height.size()-1;
        int lm= height[l]; int rm=height[r];
        int amount = 0;
        while(l<r)
        {
          if(lm < rm)
          {
            l++;
            if(height[l]> lm) lm = height[l];
            amount += lm - height[l];
          }
          else
          {
            r--;
            if(height[r]> rm) rm = height[r];
            amount += rm - height[r];
          }
        }
        return amount;
    }
};
