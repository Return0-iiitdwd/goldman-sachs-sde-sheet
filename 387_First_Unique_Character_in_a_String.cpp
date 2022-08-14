//first unique character in a string 

//approach - 1 //naive approach 
//time complexiy: O(N)
//Space compleixity: O(N)
//Here loop traverses the string 2 times, this approach wont be feasible when the string length is too long.
class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int> mp;
        for(int i =0; i < s.length(); i++)
        {
            mp[s[i]]++;
        }
        for(int i =0; i < s.length(); i++)
        {
            if(mp[s[i]] == 1)
                return i;
        }
        return -1;
    }
};
