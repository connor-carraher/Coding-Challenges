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
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL)
        {
            return NULL;
        }
        
        int count = 0;
        int numNodes = 0;
        ListNode* curr = head -> next;
        ListNode* prev = head;
        
        if(curr == NULL)
        {
            return head;
        }
        
        while(prev != NULL)
        {
            numNodes++;
            prev = prev -> next;
        }
        prev = head;
        
        if(k > numNodes)
            k = k % numNodes;
        
        while(count < k)
        {
            while(curr -> next != NULL)
            {
                prev = curr;
                curr = curr -> next;
            }
            
            curr -> next = head;
            prev -> next = NULL;
            head = curr;
            count++;
        }
        return head;
    }
};