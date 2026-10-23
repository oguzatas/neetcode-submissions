class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<int> res;
        vector<vector<int>> sol;
        set<vector<int>> seen;

        std::sort(nums.begin(),nums.end());

        backtrack(0,res,sol,seen,nums);

        return sol;
    }


    void backtrack(int start, vector<int>& res, vector<vector<int>>& sol, set<vector<int>>& seen,vector<int>& nums ) {

        if(!seen.contains(res)) 
        {
        sol.push_back(res);
        seen.insert(res);
        }
        


        for(int i=start;i<nums.size();i++) {

            res.push_back(nums[i]);
            backtrack(i+1,res,sol,seen,nums);
            res.pop_back();

        }
    }
};
