class Solution {
public:
    bool b = false;

    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* head = l1;
        ListNode* prev = nullptr;
        int c = 0;

        while (l1 != nullptr && l2 != nullptr) {
            c = l1->val + l2->val + (b ? 1 : 0);
            b = (c >= 10);
            l1->val = c % 10;
            prev = l1;
            l1 = l1->next;
            l2 = l2->next;
        }

        while (l2 != nullptr) {
            c = l2->val + (b ? 1 : 0);
            b = (c >= 10);
            l2->val = c % 10;
            prev->next = l2;
            prev = l2;
            l2 = l2->next;
        }

        while (l1 != nullptr) {
            c = l1->val + (b ? 1 : 0);
            b = (c >= 10);
            l1->val = c % 10;
            prev = l1;
            l1 = l1->next;
        }

        if (b) {
            prev->next = new ListNode(1);
        }

        return head;
    }
};