#include <bits/stdc++.h>
using namespace std;

// STRUCTURE
class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

// INSERTION AT HEAD O(1)
void insertAtHead(node* &head, int val){
    node* new_n = new node(val);
    new_n->next = head;
    head = new_n;
}

// INSERTION AT TAIL O(n)
void insertAtTail(node* &head, int val){

    node* n = new node(val);
    if (head == NULL){
        head = n;
        return;
    }
    node* temp = head;
    while (temp->next != NULL){
        temp = temp->next;
    }
    temp->next = n;
}

// INSERTION AT ANY POSITION O(n)
void insertAtPos(node* &head, int val, int pos){
    node* new_n = new node(val);
    if (pos == 0){
        insertAtHead(head,val);
        return;
    }
    node* temp = head;
    int count = 0;
    while (count != pos-1){
        temp = temp->next;
        count++;
    }
    new_n->next = temp->next;
    temp->next = new_n;
}

// UPDATE AT ANY POSITION O(n)
void updateAtPos(node* &head, int val, int pos){
    node* temp = head;
    int count = 0;
    while (count != pos){
        temp = temp->next;
        count++;
    }
    temp->data = val;
}

// DELETION AT ANY POSITION O(n)
void deleteAtPos(node* &head, int pos){
    if (pos == 0){
        node* todelete = head;
        head = head->next;
        delete todelete;
        return;
    }
    node* temp = head;
    int count = 0;
    while (count != pos-1){
        temp = temp->next;
        count++;
    }
    node* todelete = temp->next;
    temp->next = temp->next->next;
    delete todelete;
}

// DISPLAY O(n)
void display(node* &head){
    node*temp = head;
    while (temp != NULL){
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "\n";
}

int main(){
    node* n = NULL;

    insertAtHead(n,5);
    insertAtHead(n,4);
    insertAtHead(n,3);
    insertAtHead(n,2);
    insertAtHead(n,1);

    insertAtTail(n,7);
    insertAtTail(n,8);
    insertAtTail(n,9);
    insertAtTail(n,10);

    insertAtPos(n, 6, 5);
    deleteAtPos(n, 9);
    display(n);
 
    return 0;
}