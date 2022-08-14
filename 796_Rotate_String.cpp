//rotate string 

//approach: concatenate 2 strings and find whether the target string is available in the main string
//time complexity: O(N)
//Space complexity: O(1)
class Solution {
public:
    bool rotateString(string s, string goal) {
        //string tempa = s + s;
        return (s.length() == goal.length() && (s + s).find(goal) != string::npos);
    }
};