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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode *sum = nullptr;
        ListNode **tail =&sum;
        int curry = 0;
        while(l1 || l2 || curry){ 
            int sum = curry + (l1?l1->val:0) + (l2?l2->val:0);
            l1?l1 = l1->next:l1 = nullptr;
            l2?l2 = l2->next:l2 = nullptr;
            ListNode *newNode = new ListNode(sum % 10);
            curry = sum / 10;
            *tail = newNode;
            tail = &((*tail)->next);
        }
        return sum;
    }
};