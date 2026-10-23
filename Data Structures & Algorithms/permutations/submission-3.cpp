class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) {
        
        vector<int> res;
        vector<vector<int>> sol;
        vector<bool> visited(nums.size(), false);

        backtrack(res,sol,visited,nums);

        return sol;
    }


    void backtrack(vector<int>& res, vector<vector<int>>& sol,vector<bool>& visited , vector<int>& nums)
    {
        
        if(res.size() == nums.size())
        {
            sol.push_back(res);
        }
        

        for(int i=0;i<nums.size(); i++)
        {
            if(visited[i]) continue;

            visited[i] = true;
            res.push_back(nums[i]);
            backtrack(res,sol,visited,nums);
            visited[i] = false;
            res.pop_back();
        }
    }


};
