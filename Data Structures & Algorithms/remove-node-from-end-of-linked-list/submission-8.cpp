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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        
        if(!head->next) return head=nullptr;

        ListNode dummy(0, head);
        ListNode* tail;
        ListNode* lastn;
        tail=&dummy;
        lastn=&dummy; 

        for(int s= 0; s<n; s++)
        {
            tail= tail->next;
        }

        while(tail->next) {
            tail= tail->next;
            lastn= lastn->next;
        }

        ListNode * del = lastn->next;    
        lastn->next = lastn->next->next;

        delete(del);


        return dummy.next;
    }
};
