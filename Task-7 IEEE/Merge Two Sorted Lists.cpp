class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode *dummy_head = new ListNode(-1) , *prehead = dummy_head;
    while(l1 && l2)
    {
        if(l1->val < l2->val)
        {
            dummy_head->next = l1;
            l1 = l1->next;
        }
        else
        {
            dummy_head->next = l2;
            l2 = l2->next;
        }
        dummy_head = dummy_head->next;
    }
    dummy_head->next = (l1 ? l1 : l2);
    return prehead->next;
    }
};
