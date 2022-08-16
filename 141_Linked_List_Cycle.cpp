//finding if there is any loop present in linkedlist 


//time complexity : O(N)
//space complexity: O(1)
//logic: make 2 pointers slowp and fastp and move slowp by 1 place and fastp by 2 places.
//if there is any loop present in linked list they will meet for sure. If not they never meet.
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode* slowp = head;
        ListNode *fastp = head;
        while(fastp != NULL && fastp -> next != NULL)
        {
            slowp = slowp -> next;
            fastp = fastp -> next -> next;
            if(fastp == slowp)
                return true;
        }
        return false;
    }
};