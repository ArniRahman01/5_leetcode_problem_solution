class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if (!head || !head->next) return head; 

        ListNode* start = head;
        
        while (start && start->next) {
            if (start->val == start->next->val) {
                ListNode* temp = start->next;
                start->next = start->next->next;
                delete temp;  
            } else {
                start = start->next; 
            }
        }
        
        return head;
    }
};
