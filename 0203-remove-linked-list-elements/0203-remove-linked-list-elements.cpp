class Solution {
public:
    ListNode* removeElements(ListNode* head, int value) {
        while (head != NULL && head->val == value) {
            ListNode* temp = head;
            head = head->next;
            delete temp;
        }
        ListNode* temp = head;
        while (temp != NULL && temp->next != NULL) {
            if (temp->next->val == value) {
                ListNode* toDelete = temp->next;
                temp->next = temp->next->next; 
                delete toDelete;
            } else {
                temp = temp->next; 
            }
        }
        return head;
    }
};
