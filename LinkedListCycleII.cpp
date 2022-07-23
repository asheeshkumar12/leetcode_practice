/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        unordered_map<ListNode*,int> m;
        int i=0;
        while(head){
            if(m.find(head)!=m.end()){
                return head;
            }
            m[head]=i;
            i++;
            head=head->next;
        }
        return NULL;
    }
};
