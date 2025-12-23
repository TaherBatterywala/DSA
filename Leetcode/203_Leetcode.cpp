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
    ListNode* removeElements(ListNode* head, int val) {
        
        ListNode dummy(0);
        dummy.next = head;

        ListNode* Prev = &dummy;
        ListNode* Curr = head;

        while (Curr != nullptr) {
            if (Curr->val == val) {
                Prev->next = Curr->next;
                Curr = Curr->next;
            } else {
                Prev = Curr;
                Curr = Curr->next;
            }
        }

        return dummy.next;
    }
};