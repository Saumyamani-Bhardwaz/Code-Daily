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
    int sizeOfLL(ListNode* head, int count){
        if(head==NULL) return count;
        count++;
        return sizeOfLL(head->next,count);
    }
    ListNode* reverseList(ListNode* head) 
    {
        int size=sizeOfLL(head,0);
//mid?
//if size==k         
// mid=size+1/2
// k=((size+1)/2)-1;        
// now we do swapping till k=0
        int swapper=((size+1)/2)-1;
        ListNode *fast=head;
        ListNode *slow=head;
        while(swapper--){
            int k=swapper;
            while(k--){
                fast=fast->next;
            }
            ListNode *first=fast;            
            while(fast!=NULL)
            {
              fast=fast->next;
              slow=slow->next;  
            }
            swap(first->val,slow->val);
            fast=head;
            slow=head;
        }
        return head;
    }
};