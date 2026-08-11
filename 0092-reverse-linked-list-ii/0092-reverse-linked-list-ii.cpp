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
    ListNode* reverseBetween(ListNode* head, int left, int right) {
        if(left == right || head == nullptr || head ->next == nullptr) return head;
        ListNode* temp = head;
    ListNode*prev = nullptr;
    for(int i = 1; i < left ; i++){
        prev = temp;
        temp = temp->next;
    }
    ListNode*lastnode = temp;
    ListNode* beforerev = prev;
    ListNode*front;
    ListNode*end = head;
    for(int i = 1 ; i< right ; i++){
        end = end->next;
    }
     ListNode*last = end->next;
    for(int i = left ; i <= right ; i++){
        front = temp ->next;
        temp ->next = prev;
        prev = temp ;
        temp = front;
    }
    if(beforerev != nullptr){
        beforerev ->next = prev;
    }
    else
    {head = prev;}
    lastnode ->next = temp;
return head;
    }

    
};