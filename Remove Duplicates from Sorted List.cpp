class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        ListNode* tmp = head;
        ListNode* op = head;
        if (op == NULL || op->next == NULL) return head;
        while (1) {
        	if (op->val == op->next->val) {
        		if (op->next->next == NULL) {
        			op->next =NULL;
        			return tmp
        		}
        		op->next = op->next->next;
        	} else {
        		op=op->next;
        		if (op->next == NULL) return tmp;
        	}
        }
    }
};
