class Solution {
public:
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        
        vector<vector<int>> sol;
        vector<int> res;

        sort(candidates.begin(),candidates.end());

        backtrack(0,target,candidates,sol,res);

        return sol;
    }

    void backtrack(int start,int remain, vector<int>& candidates, vector<vector<int>>& sol, vector<int>& res) {

        if(remain == 0) {
            sol.push_back(res);
            return;
        }



        for(int i = start; i<candidates.size();i++)
        {
            if(candidates[i]>remain) break;

            if (i > start && candidates[i] == candidates[i - 1]) continue;

            res.push_back(candidates[i]);

            backtrack(i+1,remain-candidates[i],candidates,sol,res);

            res.pop_back();
        }

    }
};
