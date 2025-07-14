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
    int getDecimalValue(ListNode* head) {
        vector<int> ar;
        ListNode* temp=head;
        while(temp!=NULL){
            ar.push_back(temp->val);
            temp=temp->next;
        }
        long long len=ar.size();
        int res=0;
        reverse(ar.begin(),ar.end());
        for(long long i=0;i<len;i++){
            res=res+(ar[i]*pow(2,i));
        }
        return res;
    }
};