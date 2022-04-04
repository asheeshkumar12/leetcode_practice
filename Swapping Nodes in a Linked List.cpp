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
    ListNode* swapNodes(ListNode* head, int k) {
      if(head==NULL || k==0){
          return head;
      }
        
      ListNode *temp=head,*temp1=head,*kth=nullptr;
    
        while(k-->1){
            temp=temp->next;
        }
        kth=temp;
        
        
        while(temp->next!=NULL){
             temp=temp->next;
            temp1=temp1->next;
        }
        swap(temp1->val,kth->val);
        return head;
        
    }
};
