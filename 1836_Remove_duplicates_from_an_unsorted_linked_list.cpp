//removing duplicates from an unsorted array 

//time complexity: O(N)
//space complexity: O(N)
struct Node {
  int data;
  struct Node *next;
  Node(int x) {
    data = x;
    next = NULL;
  }
};
*/


class Solution
{
    public:
    //Function to remove duplicates from unsorted linked list.
    Node * removeDuplicates( Node *head) 
    {
     // your code goes here
     if(head == NULL)
     {
        return NULL;
     }
     unordered_map<int,bool>visit;
     Node* prev = head;
     Node *curr = head -> next;
     visit[prev -> data] = true;
     while(curr != NULL)
     {
        if(visit[curr -> data] == true){
            prev -> next = curr -> next;
            delete(curr);
        }
        else
        {
            visit[curr -> data] = true;
            prev = prev -> next;
        }
        curr = prev -> next;
     }
     return head;
    }
};