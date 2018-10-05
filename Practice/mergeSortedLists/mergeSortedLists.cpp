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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode *mergedList = new ListNode(0);
        ListNode *curr = mergedList;
        while(l1 != NULL && l2 != NULL)
        {
            if(l1 -> val > l2 -> val)
            {
                ListNode *newNode = new ListNode(l2 -> val);
                curr -> next = newNode;
                curr = newNode;
                l2 = l2 -> next;
            }
            else
            {
                ListNode *newNode = new ListNode(l1 -> val);
                curr -> next = newNode;
                curr = newNode;
                l1 = l1 -> next;
            }
        }
        
        if(l1 == NULL && l2 != NULL)
        {
            curr -> next = l2;
        }
        else if(l1 != NULL && l2 == NULL)
        {
            curr -> next = l1;
        }
        
        mergedList = mergedList -> next;
        return mergedList;
    }
};