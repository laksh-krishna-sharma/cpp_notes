#include <bits/stdc++.h>
using namespace std;

class node{
    public:
        int data;
        node* next;

        node(int val){
            data = val;
            next = NULL;
        }
};

class cll{
    public:
        node* head;

        cll(){
            head = NULL;
        }

        // insertion at head O(1)
        void insertAtHead(int val){

            node* n = new node(val);
            if(head == NULL){
                head = n;
                n->next = head;
                return;
            }

            node* tail = head;
            while (tail->next != head){
                tail = tail->next;
            }
            tail->next = n;
            n->next = head;
            head = n;
        }

        // insertion at tail O(n)
        void insertAtTail(int val){
            node* n = new node(val);

            node* tail = head;
            if(head == NULL){
                insertAtHead(val);
                return;
            }
            while (tail->next != head){
                tail = tail->next;
            }
            tail->next = n;
            n->next = head;
        }
        // insert at k'th position O(n)
        void insertAtPos(int val, int k){
            node* n = new node(val);
            node* temp = head;

            if(k == 1){
                insertAtHead(val);
                return;
            }
            int count = 0;
            while (count != k-1){
                temp = temp->next;
                count++;
            }
            n->next = temp->next;
            temp->next = n;
        }

        // Display
        void display(){
            node* temp = head;
            do{
                cout << temp->data << " -> ";
                temp = temp->next;
            } while (temp != head);
            cout << "\n";
        }

        // floyd's tortoise and hare algorithm
        bool floydTortoiseHare(){
            if(head == NULL) return false;

            node* slow = head;
            node* fast = head;

            while(slow != NULL && fast !=NULL) {
                
                fast = fast -> next;
                if(fast != NULL) {
                    fast = fast -> next;
                }

                slow = slow -> next;

                if(slow == fast) {
                    cout << "present at " << slow -> data << "\n";
                    return true;
                }
            }

            return false;
        }
};


int main(){

    cll c;

    c.insertAtHead(5);
    c.insertAtHead(4);
    c.insertAtHead(3);
    c.insertAtHead(2);
    c.insertAtHead(1);
    
    c.insertAtTail(7);
    c.insertAtTail(8);
    c.insertAtTail(9);
    c.insertAtTail(10);

    c.insertAtPos(6, 5);

    c.display();

    c.floydTortoiseHare();

    return 0;
}
