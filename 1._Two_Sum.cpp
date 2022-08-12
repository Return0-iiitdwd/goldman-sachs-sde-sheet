//two sum

//approach - 1
//time complexity: O(N ^ 2)
//space complexity: O(1)
//logic: using 2 for loops

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        for(int i = 0;i < nums.size(); i++)
        {
            for(int j = i + 1;j < nums.size();j++)
            {
                if(nums[i] + nums[j] == target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    
                }
            }
        }
        return ans;
    }
};

//approach - 2
//time complexity: O(N)
//space complexity: O(N)
//Logic: using unordered_map

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;
        int n = nums.size();
        for(int i = 0;i < n;i++)
        {
            if(ans.find(target - nums[i]) != ans.end())
            {
                return {ans[target - nums[i]],i};
            }
            ans[nums[i]] = i;
        }
        return {};
    }
};
