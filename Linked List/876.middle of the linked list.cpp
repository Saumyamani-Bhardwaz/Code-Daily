class Solution {
public:
    ListNode* middleNode(ListNode* head) {
     // if(head==0 ) return 0;
      //if(head->next==0) return head;
      ListNode* fast=head;
      ListNode* slow=head;
      while(fast!=0 &&fast->next!= 0 ){
          fast=fast->next->next;
          slow=slow->next;
      }
      head=slow;
      return head;
    }
};
