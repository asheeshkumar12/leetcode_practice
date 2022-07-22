class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        //stack<ListNode*> st;
        
        ListNode* rs=new ListNode(-1);
        ListNode* prev=rs;
        rs->next=head;
        for(int i=0;i<left-1;i++){

            prev=prev->next;
            
    }
       ListNode* curr=prev->next;
        for(int i=0;i<right-left;i++){
            
            ListNode* t=prev->next;
            prev->next=curr->next;
            curr->next=curr->next->next;
            prev->next->next=t;
            //prev->next=
        }
     return rs->next;
        
        
    }
};
