class Solution {
public:
    ListNode* mergeTwoLists(ListNode* ListOne, ListNode* ListTwo) {
        if (!ListOne) return ListTwo; 
        if (!ListTwo) return ListOne;

        ListNode temp(0);
        ListNode* start = &temp;
        
        while (ListOne && ListTwo) {
            if (ListOne->val < ListTwo->val) {
                start->next = ListOne;
                ListOne = ListOne->next;
            } else {
                start->next = ListTwo;
                ListTwo = ListTwo->next;
            }
            start = start->next; 
        }
        
        if (ListOne) {
            start->next = ListOne;
        } else {
            start->next = ListTwo;
        }
        
        return temp.next; 
    }
};