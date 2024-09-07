#include<bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* prev;
        node* next;

        node(int val){
            data = val;
            prev = NULL;
            next = NULL;
        }
};

class doublelinkedlist{
    public:
        node* tail;
        node* head;

        doublelinkedlist(){
            tail = NULL;
            head = NULL;
        }

        // display O(n)
        void display(){
            node* temp = head;
            while (temp != NULL){
                cout << temp->data << " <-> ";
                temp = temp->next;
            }
            cout << "\n";
        }
        
        // inseert at head O(1)
        void insertAtHead(int val){
            node* new_node = new node(val);
            if (head == NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            new_node->next = head;
            head->prev = new_node;
            head = new_node;
        }

        // insert at tail O(1)
        void insertAtTail(int val){
            node* new_node = new node(val);
            if (tail == NULL){
                head = new_node;
                tail = new_node;
                return;
            }
            tail->next = new_node;
            new_node->prev = tail;
            tail = new_node;
        }
        // insert at any position O(n)
        void insertAtPos(int val, int pos){
            node* new_node = new node(val);
            if (pos == 1){
                insertAtHead(val);
                return;
            }
            node* temp = head;
            int count = 0;
            while (count != pos-1){
                temp = temp->next;
                count++;
            }
            new_node->next = temp->next;
            temp->next->prev = new_node;
            temp->next = new_node;
            new_node->prev = temp;
        }

        // delete from any position O(n)
        void deleteAtPos(int pos){
            if (pos == 1){
                node* temp = head;
                head = head->next;
                head->prev = NULL;
                free(temp);
                return;
            }
            node* temp = head;
            int count = 0;
            while (count < pos){
                temp = temp->next;
                count++;
            }
            temp->next->prev = temp->prev;
            temp->prev->next = temp->next;
            free(temp);
        }


};


int main(){

    doublelinkedlist dll;
    
    dll.insertAtHead(5);
    dll.insertAtHead(4);
    dll.insertAtHead(3);
    dll.insertAtHead(2);
    dll.insertAtHead(1);

    dll.insertAtTail(7);
    dll.insertAtTail(8);
    dll.insertAtTail(9);
    dll.insertAtTail(10);

    dll.insertAtPos(6, 5);
    dll.display();
    dll.deleteAtPos(5);

    dll.display();

    return 0;
}
