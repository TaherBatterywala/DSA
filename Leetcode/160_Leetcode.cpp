#include<bits/stdc++.h>
using namespace std;
  struct ListNode {
      int val;
      ListNode *next;
      ListNode(int x) : val(x), next(NULL) {}
  };

class Solution {
public:
    ListNode *getIntersectionNode(ListNode *h1, ListNode *h2) {
        ListNode* d1=h1;
        ListNode* d2=h2;
        ListNode* answer;
        while(1){
            if(d1==NULL && d2!=NULL){
                d1=h1;
                continue;
            }
            if(d2==NULL && d1!=NULL){
                d2=h2;
                continue;
            }
            if(d1==NULL && d2==NULL){
                break;
            }
            if(d1!=NULL && d2!=NULL && d1==d2){
                answer=d1;
                break;
            }
            d1=d1->next;
            d2=d2->next;
        }
        return answer;
    }
};