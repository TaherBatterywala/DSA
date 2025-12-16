#include <bits/stdc++.h>
using namespace std;

// Node class represents a node in the linked list
class Node {
public:
    int data;     // Data value
    Node* next;   // Pointer to next node

    // Constructor with data and next
    Node(int data1, Node* next1) {
        data = data1;
        next = next1;
    }

    // Constructor with only data
    Node(int data1) {
        data = data1;
        next = nullptr;
    }
};

Node* arr2ll(vector<int> &arr){
    Node* head = new Node(arr[0]);
    Node* mover = head;
    for(int i = 1; i<arr.size(); i++){
        Node* temp = new Node(arr[i]);
        mover->next = temp;
        mover = temp;
    }
    return head;
}
Node* deleteHead(Node* head){
    if(head == NULL) return head;
    Node* temp = head;
    head = head->next;
    delete temp;
    return head;
}

Node* removeTail(Node* head){
    Node* temp = head;
    while(temp->next->next != NULL){
        temp = temp->next;
    }
    delete temp->next;
    temp->next = nullptr;
    return head; 
}

void print(Node* head){
    Node* temp   = head;
    while(temp){
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
}

int main() {
    vector<int> arr = {23, 5, 8, 7, 4, 3, 56, 78, 21};
    Node* head = arr2ll(arr);
    cout<<"LL before Head Delete"<<endl;
    print(head);
    cout<<endl;
    cout<<"LL after Head Delete"<<endl;
    head = deleteHead(head);
    print(head);
    cout<<endl;
    cout<<"LL after Tail Delete"<<endl;
    head = removeTail(head);
    print(head);
}