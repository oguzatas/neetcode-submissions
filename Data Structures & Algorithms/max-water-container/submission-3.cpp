class Solution {
public:
    int maxArea(vector<int>& heights) {
        int l=0;
        int r=heights.size() - 1;
        int maxwater = 0;
        while(l<r)
        {
            if(heights[l]<heights[r])
            {
                if(maxwater<heights[l]*(r-l)) maxwater = heights[l]*(r-l);   
                l++;
            }
            else if(heights[r]<=heights[l])
            {
                
                if(maxwater<heights[r]*(r-l)) maxwater = heights[r]*(r-l);   
                
                r--;

                
            }

            
        }
        return maxwater;
    }
};
