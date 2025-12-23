#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };
class Solution {
public:
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<pair<int, ListNode*>, vector<pair<int, ListNode*>>, greater<>> minHeap;

        for (auto node : lists) {
            if (node) {
                minHeap.push({node->val, node});
            }
        }

        ListNode dummy(0);
        ListNode* tail = &dummy;

        while (!minHeap.empty()) {
            auto [val, node] = minHeap.top();
            minHeap.pop();
            tail->next = node;
            tail = tail->next;
            if (node->next) { 
                minHeap.push({node->next->val, node->next});
            }
        }

        return dummy.next;
    }
};