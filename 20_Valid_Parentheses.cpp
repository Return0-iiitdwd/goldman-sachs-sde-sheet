//check for balanced paranthesis in a string 


//time complexity: O(N)
//space complexity: O(1)
//logic: if any open bracket is found while traversing push it into stack if not check if
// it is the closing bracket and proceed accordingly. If not, return false.
class Solution {
public:
    bool isValid(string s) {
        stack<int> ans;
        for(int i = 0; i < s.length();i++)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
            {
                ans.push(s[i]);
            }
            else if(s[i] == ')' && !ans.empty() && ans.top() == '(')
                ans.pop();
            else if(s[i] == ']' && !ans.empty() && ans.top() == '[')
                ans.pop();
            else if(s[i] == '}' && !ans.empty() && ans.top() == '{')
                ans.pop();
            else
                return false;   
        }
        return ans.empty();
        
    }
};