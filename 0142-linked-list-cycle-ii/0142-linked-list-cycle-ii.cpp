/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode *tortoise= head,*hare = head;
        do {
            if(!hare || !hare->next)
                return nullptr;
            tortoise = tortoise->next;
            hare = hare->next->next;
        } while(tortoise != hare);

        tortoise = head;
        while(tortoise != hare) {
            tortoise = tortoise->next;
            hare = hare->next;
        }
        return hare;
    }
};