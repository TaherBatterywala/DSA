#include <bits/stdc++.h>
using namespace std;

// Class representing a node in Doubly Linked List
class Node {
public:
    // Stores data of the node
    int data;

    // Pointer to the next node
    Node* next;

    // Pointer to the previous node
    Node* prev;

    // Constructor when data, next and prev are provided
    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

    // Constructor when only data is provided
    Node(int data1) {
        data = data1;
        next = nullptr;
        prev = nullptr;
    }
};

Node* arr2dll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* prev = head;
    for(int i=1; i<arr.size(); i++){
        Node* temp = new Node(arr[i], nullptr, prev);
        prev->next = temp;
        prev = temp;
    }
    return head;
}
void print(Node* head){
    Node* temp   = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
}
Node* DeleteHead(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* temp = head;
    head = head->next;
    head->prev = nullptr;
    temp->next = nullptr;
    delete temp;
    return head;
}
Node* DeleteTail(Node* head){
    if(head == NULL || head->next == NULL){
        return NULL;
    }
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* newtail = tail->prev;
    newtail->next = nullptr;
    tail->prev = nullptr;
    delete tail;
    return head;
}
Node* removeKth(Node* head, int k){
    if(head == NULL){
        return NULL;
    }
    int cnt = 0;
    Node* kNode = head;
    while(kNode != NULL){
        cnt++;
        if(cnt == k) break;
        kNode = kNode->next;
    }
    Node* temp = kNode->prev;
    Node* front = kNode->next;
    if(temp == NULL && front == NULL){
        return NULL;
    }
    else if(temp == NULL){
        return DeleteHead(head);
    }
    else if(front == NULL){
        return DeleteTail(head);
    }
    temp->next = front;
    front->prev = temp;
    kNode->prev = nullptr;
    kNode->next = nullptr;
    delete kNode;
    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7, 10, 45, 43, 23, 34, 11};
    Node* head = arr2dll(arr);
    print(head);
    cout<<endl;
    head = DeleteHead(head);
    print(head);
    cout<<endl;
    head = DeleteTail(head);
    print(head);
    cout<<endl;
    head = removeKth(head,4);
    print(head);
    return 0;
}
