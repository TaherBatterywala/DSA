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

int main() {
    vector<int> arr = {2, 5, 8, 7, 10, 45, 43, 23, 34, 11};
    Node* head = arr2dll(arr);
    print(head);
    return 0;
}
