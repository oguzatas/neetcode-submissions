class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        
        vector<int> res;
        vector<vector<int>>sol;

        dfs(0,nums,sol,res);

        return sol;
        
    }

void dfs(int start,vector<int>& nums,vector<vector<int>>& sol,vector<int>& res)
 {
    sol.push_back(res);

    for(int i=start;i<nums.size();i++)
    {
        res.push_back(nums[i]);
        dfs(i+1,nums,sol,res);
        res.pop_back();
    }
 }

};


 
 