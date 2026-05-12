class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int,unordered_set<char>> row;
        unordered_map<int,unordered_set<char>> col;
        unordered_map<int,unordered_set<char>> squ;

         for(size_t i=0;i<9;i++)
         {
            for(size_t j=0;j<9;j++)
                {
                    char index = board[i][j];
                
                    int x= i/3;
                    int y= j/3;
                    string s = std::to_string(x) + std::to_string(y);
                    int combined = std::stoi(s); 
                if(row[i].count(index) || col[j].count(index) || squ[combined].count(index) )
                {
                    return false;
                }
                
                if(index != '.') 
                {
                    row[i].insert(index);
                    col[j].insert(index);
                    squ[combined].insert(index);
                }

                  
                }

         }
         return true;
    }
};
