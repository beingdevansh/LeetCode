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
    int pairSum(ListNode* head) {
        ListNode* temp = head;
        vector <int> a;
        while(temp != NULL)
        {
            a.push_back(temp->val);
            temp = temp->next;
        }

        int ans = 0;
        for(int i = 0; i < a.size()/2; i++)
        {
            int sum = 0;
            sum += a[i] + a[a.size() - i - 1];
            ans = max(sum,ans);
        }

        return ans;
    }
};