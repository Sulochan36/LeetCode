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
        int to = 0;
        int sum = 0;
        ListNode* l3 = new ListNode();
        ListNode* res = l3;
        ListNode* ans = new ListNode();

        while(l1 || l2 || to){
            sum = to;

            if(l1){
                sum = sum + l1->val;
                l1 = l1->next;
            }

            if(l2){
                sum = sum + l2->val;
                l2 = l2->next;
            }

            int num = sum%10;
            to = sum/10;
            l3->next = new ListNode(num);
            l3 = l3->next;
        }

        ans = res->next;
        delete res;
        return ans;


    }
};