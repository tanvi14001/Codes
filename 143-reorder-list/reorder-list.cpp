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
    void reorderList(ListNode* head) {
        if (head == NULL || head->next == NULL || head->next->next == NULL)
            return;

        ListNode* slow = head;
        ListNode* fast = head->next;

        // finding mid of the linked list
        while (fast != NULL && fast->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* curr = slow->next;
        slow->next = NULL; // breaking the middle half of the LL
        ListNode* prev = NULL;

        // reversing the secong half of the LL
        while (curr != NULL) {
            ListNode* temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }

        // Heads of both the LLs
        ListNode* head1 = head;
        ListNode* head2 = prev;

        // Merging the LLs
        while (head2 != NULL) {
            ListNode* t1 = head1->next;
            ListNode* t2 = head2->next;

            head1->next = head2;
            head2->next = t1;

            head1 = t1;
            head2 = t2;
        }
    }
};