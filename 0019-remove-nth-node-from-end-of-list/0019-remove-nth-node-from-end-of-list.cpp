
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head==NULL) return NULL;

        int count=0;
        ListNode* temp=head;
        ListNode* pemp=head;

        while(temp!=NULL){
            count++;
            temp=temp->next;
        }

        if(n==count){
            return head->next;
        }

        int r=1;
        while(r<count-n){
            r++;
            pemp=pemp->next;
        }

        pemp->next=pemp->next->next;

        return head;
    }
};
