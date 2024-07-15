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
    ListNode* mergeNodes(ListNode* head) {
        ListNode* temp = head->next;
        ListNode* modify = temp;
        while (modify != NULL) {
            int sum = 0;
            while (modify->val != 0) {
                sum += modify->val;
                modify = modify->next;
            }
            temp->val = sum;
            modify = modify->next;
            temp->next = modify;
            temp = temp->next;
        }
        return head->next;
    }
};