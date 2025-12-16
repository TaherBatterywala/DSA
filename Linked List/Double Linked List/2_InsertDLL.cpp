#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* next;
    Node* prev;

    Node(int data1, Node* next1, Node* prev1) {
        data = data1;
        next = next1;
        prev = prev1;
    }

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
    Node* temp = head;
    while(temp){
        cout << temp->data << " ";
        temp = temp->next;
    }
}

Node* InsertBeforeHead(Node* head, int val) {
    Node* newHead = new Node(val, head, nullptr);
    if(head != nullptr) {
        head->prev = newHead;
    }
    return newHead;
}

Node* InsertBeforeTail(Node* head, int val) {
    if(head == NULL) return new Node(val);
    if(head->next == NULL) return InsertBeforeHead(head, val);
    Node* tail = head;
    while(tail->next != NULL) {
        tail = tail->next;
    }
    Node* prevNode = tail->prev;
    Node* newNode = new Node(val, tail, prevNode);  
    prevNode->next = newNode;
    tail->prev = newNode;
    return head;
}

Node* InsertAfterHead(Node* head, int val){
    if(head == NULL) return new Node(val); 
    Node* nextNode = head->next;
    Node* newNode = new Node(val, nextNode, head); 
    head->next = newNode;
    if(nextNode != nullptr){
        nextNode->prev = newNode;
    }
    return head;
}

Node* InsertAfterTail(Node* head, int val){
    if(head == NULL) return new Node(val);
    Node* tail = head;
    while(tail->next != NULL){
        tail = tail->next;
    }
    Node* newNode = new Node(val, nullptr, tail);
    tail->next = newNode; 
    return head;
}

Node* InsertKth(Node* head, int k, int val){
    if(k == 1) return InsertBeforeHead(head, val);
    Node* temp = head;
    int cnt = 0;
    while(temp != NULL){
        cnt++;
        if(cnt == k) break;
        temp = temp->next;
    }
    if(temp == NULL && cnt == k-1) {
        return InsertAfterTail(head, val);
    } 
    Node* prevNode = temp->prev;
    Node* newNode = new Node(val, temp, prevNode); 
    prevNode->next = newNode;
    temp->prev = newNode;
    return head;
}

int main() {
    vector<int> arr = {2, 5, 8, 7, 10}; 
    Node* head = arr2dll(arr);
 
    print(head);
    cout << endl;
    head = InsertBeforeHead(head, 100);
    print(head);
    cout << endl;
    head = InsertBeforeTail(head, 200);
    print(head);
    cout << endl;
    head = InsertAfterHead(head, 300);
    print(head);
    cout << endl;
    head = InsertAfterTail(head, 400);
    print(head);
    cout << endl;
    head = InsertKth(head, 3, 500);
    print(head);
    cout << endl;
    return 0;
}