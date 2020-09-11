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
    int findSize(ListNode* head) {
        ListNode* ptr = head;
        int siz = 0;
        while(ptr != NULL)
        {
            ptr = ptr->next;
            siz++;
        }
        return siz;
    }
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* ptr1 = headA, *ptr2 = headB;
        int size1 = findSize(headA), size2 = findSize(headB);
        if(size1 > size2) {
            int count = size1 - size2;
            while(count--)
                ptr1 = ptr1->next;
        }
        else {
            int count = size2 - size1;
            while(count--)
                ptr2 = ptr2->next;
        }
        while(ptr1 != NULL || ptr2 != NULL) {
            if(ptr1 == ptr2)
                return ptr1;
            ptr1 = ptr1->next;
            ptr2 = ptr2->next;
        }
        return NULL;
    }
};