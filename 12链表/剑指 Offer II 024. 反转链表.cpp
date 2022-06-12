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
    ListNode* reverseList(ListNode* head) {
        if(head == nullptr){
            return nullptr;
        }
        ListNode* p = new ListNode();
        p->next = head;
        ListNode* pre = head;
        ListNode* now = head->next;
        while(now){
            pre->next = now->next;//删除now
            now->next = p->next;
            p->next = now;
            now = pre->next;
        }
        return p->next;
    }
};