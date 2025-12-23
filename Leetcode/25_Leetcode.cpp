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
ListNode* reverse(ListNode *head)
{
   ListNode* temp = head;
   ListNode* prev = NULL;
   while(temp != NULL){
       ListNode* front = temp->next;
       temp->next = prev;
       prev = temp;
       temp = front; 
   }
   return prev;  
}

    ListNode* traverse(ListNode* head,int k)
    {
        k -= 1;
        while(head!=NULL and k>0)
        {
            k--; 
            head = head->next;   
        }
        return head;
    }

    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode* temp = head;
        ListNode* nextnode = NULL;
        ListNode* prev = NULL;

        while(temp != NULL)
        {
            ListNode* Kthnode = traverse(temp,k);

            if(Kthnode == NULL)
            {
              if(prev) prev->next = temp;
                break;
            }

            nextnode = Kthnode->next;
            Kthnode->next = NULL;
            reverse(temp);
        
            if(temp==head)
            {
                head = Kthnode;
            }
            else{
            prev->next = Kthnode;
            }
            prev = temp;
            temp = nextnode;
        }
        return head;
    }
};