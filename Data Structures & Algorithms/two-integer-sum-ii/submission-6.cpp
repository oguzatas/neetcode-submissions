class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        
        int sec;

        for(int i = 0;i<numbers.size();i++)
        {
            for(int j = 0; j<numbers.size(); j++)
            {
                if( i != j && numbers[i]+numbers[j] == target)
                {
                    return std::vector<int>{i+1 , j+1};
                } 

            }
        }
    }
};
