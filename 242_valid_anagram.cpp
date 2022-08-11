//242. Valid anagram

//approach - 1
//time complexity: O(NlogN)
//space complexity: O(1)
//logic: using sort in-built function
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        if(s == t)
            return true;
        else
            return false;
    }
};

//approach - 2
//time complexity: O(N)
//space complexity: O(1)
//logic: implementation of count array
class Solution {
public:
    bool isAnagram(string s, string t) {
        int arr[26] = {0};
        if(s == t)
            return true;
        if(s.length() != t.length())
            return false;
        for(int i = 0; i < s.length(); i++)
        {
            arr[s[i] - 'a']++;
            arr[t[i] - 'a']--;
        }
        for (int i=0; i<26; i++) {
            if(arr[i])
                return false;
        
        }
        return true;
    
    }
};
