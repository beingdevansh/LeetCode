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
        ListNode *temp = head->next;
        ListNode *num = temp;
        while(num != NULL)
        {
            int sum = 0;
            while(num->val != 0)
            {
                sum += num->val;
                num = num->next;
            }

            temp->val = sum;
            num = num->next;
            temp->next = num;
            temp = temp->next;
        }
        return head->next;
    }
};