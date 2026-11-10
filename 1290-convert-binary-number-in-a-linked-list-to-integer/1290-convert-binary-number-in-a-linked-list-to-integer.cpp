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
    int getDecimalValue(ListNode* head) {
        int n=0;
        ListNode* temp=head;
        ListNode* semp=head;
        while(temp!=NULL){
            n++;
            temp=temp->next;
        }
        int s=0;
for(int i=1;i<=n;i++){
s=s+pow(2,n-i)*(semp->val);
semp=semp->next;
}
    return s;}
};