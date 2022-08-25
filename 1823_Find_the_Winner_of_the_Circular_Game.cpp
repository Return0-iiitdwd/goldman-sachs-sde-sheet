//find the winner of the circular game 



//time complexity: 
//space complexity: 
//logic: remove the element from the queue k - 1 times and push it back to the queue and remove the kth element from the front of the queue 
class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int> ans;
        for(int i = 1; i <= n; i++)
        {
            ans.push(i);
        }
        while(ans.size() != 1)
        {
            for(int i = 1; i <= k - 1;i++)
            {
                int fri = ans.front();
                ans.push(fri);
                ans.pop();
            }
            ans.pop();
        }
        return ans.front();
    }
};
