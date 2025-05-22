class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1,ListNode* l2) {
        ListNode* l3 = new ListNode(0);
        ListNode* head = l3;
        int carry = 0;

        while (l1 != nullptr || l2 != nullptr) {
            int l1Val = (l1 != nullptr) ? l1->val : 0; 
            int l2Val = (l2 != nullptr) ? l2->val : 0;

            int value = l1Val + l2Val + carry;
            carry = value / 10;

            l3->next = new ListNode(value % 10);
            l3 = l3->next;

            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }

        if (carry != 0) {
            l3->next = new ListNode(carry);
        }

        return head->next;
    }
};
