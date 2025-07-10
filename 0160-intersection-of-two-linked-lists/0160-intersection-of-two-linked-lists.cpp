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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (!headA || !headB)
            return nullptr;
        
        ListNode *pointer_a = headA;
        ListNode *pointer_b = headB;
        while(pointer_a != pointer_b)
        {
            pointer_a =pointer_a? pointer_a->next : headB;
            pointer_b =pointer_b? pointer_b->next : headA;
        }

        return pointer_a; 
    }
};
