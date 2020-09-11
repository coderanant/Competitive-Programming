/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* ptr = head;
        ListNode* last = head;
        if(head == NULL)
            return NULL;
        while(1) {
            if(head->next == NULL)
                break;
            ListNode* temp = head->next;
            head->next = head->next->next;
            temp->next = last;
            last = temp;
        }
        return last;
    }
};