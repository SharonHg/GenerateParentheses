class Solution {
public:

    vector<string> generating(int n, int right, int left, string ps, vector<string>parenthese) 
    {
        if(n*2 == ps.length())
        {
            parenthese.push_back(ps);
        }

        if(left<n)
        {
            parenthese = generating(n, right, left+1, ps+"(", parenthese); 
        }


        if(right<left)
        {
            parenthese = generating(n, right+1, left, ps+")", parenthese); 
        }
        
        return parenthese ;     
    }
    vector<string> generateParenthesis(int n) 
    {
        vector<string> parenthese;
        parenthese = generating(n, 0, 0,"", parenthese); 
        return parenthese;
    }
};