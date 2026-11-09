class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {

        if(head->next == NULL) {
            return NULL;
        }

        ListNode* temp = head;
        int count = 0;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        int pount = 0;
        ListNode* remp = head;

        while(pount != (count/2)-1) {
            remp = remp->next;
            pount++;
        }

        ListNode* todel = remp->next;
        remp->next = todel->next;

        return head;
    }
};