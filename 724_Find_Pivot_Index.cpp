//724. Find Pivot Index


//time complexity: O(N)
//space complexity: O(1)
//logic: use prefix sum method
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum = 0;
        int tempSum = 0;
        for(auto num: nums)
        {
            sum += num;
        }
        for(int i = 0;i < nums.size(); i++)
        {
            if(tempSum == sum - tempSum - nums[i])
                return i;
            tempSum += nums[i];
        }
        return -1;
        
    }
};
