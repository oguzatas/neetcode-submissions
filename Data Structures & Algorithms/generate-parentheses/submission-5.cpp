class Solution {
public:
    vector<string> generateParenthesis(int n) {
       
       vector<string> res;
       dfs("",res,n);
       return res;   
    }

    bool valid(string& s)
       {
        int op = 0;
         for(char c : s)
         {
            op += (c == '(') ? 1 : -1;
            if(op < 0) return false;
         }
         return op == 0;
       }


       void dfs(string s, vector<string>& str , int n) {

        if(s.length() == 2*n)
        {
            if(valid(s)) str.push_back(s);
            return;
        }

        dfs(s+'(',str,n);
        dfs(s+')',str,n);

       }



};
