class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode* semp = head;
        ListNode* temp = head;

        if(head == NULL || head->next == NULL) {
            return head;
        }

        int count = 0;

        while(temp != NULL) {
            count++;
            temp = temp->next;
        }

        int r = 1;

        if(count % 2 == 0) {
            while(r < (count/2)+1) {
                r++;
                semp = semp->next;
            }
        }
        else {
            while(r < (count/2)+1) {
                r++;
                semp = semp->next;
            }
        }

        return semp;
    }
};