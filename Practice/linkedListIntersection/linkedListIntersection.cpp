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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        int lenA = 0;
        int lenB = 0;
        int diff;
        
        ListNode *currA = headA;
        ListNode *currB = headB;
        
        while(currA != NULL)
        {
            lenA++;
            currA = currA -> next;
        }
        
        while(currB != NULL)
        {
            lenB++;
            currB = currB -> next;
        }
        
        currA = headA;
        currB = headB;
        
        while(lenA > lenB)
        {
           currA = currA -> next;
            lenA--;
        }
        
        while(lenA < lenB)
        {
           currB = currB -> next;
            lenB--;
        }
        
        while(currA != NULL)
        {
            if(currA == currB)
            {
                return currA;    
            }
            currA = currA -> next;
            currB = currB -> next;
        }
        return currA;
    }
};