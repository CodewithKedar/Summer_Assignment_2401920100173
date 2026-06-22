class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        int i=0;
        ListNode* temp=head;
        while(temp!=NULL){
            i++;
            temp=temp->next;
        }
        if(i==n) return head->next;
        n=i-n;
        temp=head;
        i=1;
        while(i<n){
            temp=temp->next;
            i++;
        }
        temp->next=temp->next->next;
        return head;

    }
};
