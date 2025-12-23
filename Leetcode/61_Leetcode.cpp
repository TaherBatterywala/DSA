#include<bits/stdc++.h>
using namespace std;
#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k == 0) return head;
        ListNode* tail = head;
        int len = 1;
        while(tail->next != NULL){
            len++;
            tail = tail->next;
        }
        tail->next = head;
        k = k % len;
        int stepsToNewTail = len - k; 
        ListNode* temp = head;
        for(int i = 1; i < stepsToNewTail; i++){
            temp = temp->next;
        }
        head = temp->next; 
        temp->next = NULL; 
        
        return head;
    }
};