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
    ListNode* mergeInBetween(ListNode* list1, int a, int b, ListNode* list2) {
        ListNode *head = list1, *curr = list1;
        for (int i = 1; i < a; i++) {
            curr = curr->next;
        }

        ListNode* rm_start = curr;
        ListNode* rm_end = curr->next;

        for (int i = a; i <= b; i++) {
            ListNode* temp = rm_end;
            rm_end = rm_end->next;
            delete temp;
        }
    rm_start->next = list2;
    while (curr != NULL && curr->next != NULL) {
        curr = curr->next;
    }
    curr->next = rm_end;
    return head;
    }
};