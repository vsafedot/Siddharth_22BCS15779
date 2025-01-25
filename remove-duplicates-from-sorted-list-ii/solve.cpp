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
        ListNode* deleteDuplicates(ListNode* head) {
            
            ListNode* fake = new ListNode(0);
             fake->next = head;
            ListNode* pre = fake;     
            ListNode* curr = head;     
           
            while (curr != NULL) {
                
                while (curr->next != NULL && pre->next->val == curr->next->val)
                    curr = curr->next;
                
                if (pre->next == curr)
                    pre = pre->next;
               
                else
                    pre->next = curr->next;
                   
                    curr = curr->next;
            }
            return fake->next;
        }
    };