class Solution {
public:
    bool isPalindrome(ListNode* head) {
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        int mid=len/2;
        int i=0;
        ListNode* prev=NULL;
        ListNode* curr=head;
        while(i<mid){
            ListNode* forward = curr->next;
            curr->next=prev;
            prev=curr;
            curr=forward;
            i++;
        }
        if(len%2==1){
            curr=curr->next;
        }
        while(prev!=NULL && curr!=NULL){
            if(prev->val != curr->val){
                return false;
            }
            curr=curr->next;
            prev=prev->next;
        }
        return true;
    }
};
