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
    ListNode *detectCycle(ListNode *head) {
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        while(ptr2 !=NULL)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
            if(ptr2 == NULL)
                return NULL;
            ptr2 = ptr2->next;
            if(ptr2 == NULL)
                return NULL;
            if(ptr2 == ptr1)
                break;
        }
        ptr1 = head;
        while(ptr1 != ptr2)
        {
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return ptr1;
    }
};