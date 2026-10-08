class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        
        vector<vector<int>> res;
        vector<int> cur;

        comb(0,res,cur,nums,target,0);

        return res;
    }


    void comb(int s,vector<vector<int>>& res,vector<int>& cur,vector<int>& nums,int target,int sum)
    {
        
      if(sum == target) {
       res.push_back(cur);
       return; 
      }

      if(sum>target) {
        return;
      }   

      for(int i= s;i<nums.size();i++)
      {
        cur.push_back(nums[i]);

        comb(i,res,cur,nums,target,sum+nums[i]);
        
        cur.pop_back();
      }
        
    }
};
