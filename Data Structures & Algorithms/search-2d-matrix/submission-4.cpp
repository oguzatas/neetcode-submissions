class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int l=0;
        int r=matrix.size()-1;
        int h=0;        
        while(l<=r)
        {
        int m= l + (r - l) / 2;

         if(target == matrix[m][0])
         { return true; }   

         if(matrix[m][0] < target)
         {
            l = m + 1;   
         }

         if(matrix[m][0]> target)
         {
            r = m-1;
         }   
        }
    if(l == 0) return false;

    h = l-1;
    l=0;    
    r = matrix[h].size()-1;

    while(l<=r)
    {
        int m= l + (r-l) /2 ;

        if(target == matrix[h][m]) return true;

        if(matrix[h][m] < target)
        {
            l = m +1;
        }

        if(matrix[h][m]> target)
        {
            r = m-1;
        }
    }

    return false;
}

};
