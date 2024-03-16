#include<iostream>
using namespace std;

//class
class Node{

    public:
            int data;
            Node *next;

            Node(int data){
                this -> data = data;
                this -> next = NULL;
            }

};



void insertAtHead(Node* &head, int d){
    
    Node *temp = new Node(d); //next new node creation
    temp -> next = head;
    head = temp;

}

Node* reverse(Node *head){
    //base case
    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *newHead = reverse(head -> next);

    head -> next -> next = head;
    head -> next = NULL;

    return newHead;

}

Node* reverseLinkedList(Node *head){

    if(head == NULL || head -> next == NULL){
        return head;
    }

    Node *prev = NULL;
    Node *current = head;
    Node *Foward = NULL;

    while(current != NULL){
       Foward = current ->  next;
       current -> next = prev;
       prev = current;
       current = Foward;
    }

    return prev;
}

void print(Node* &head){
    
    Node *temp = head;

    while(temp != NULL){
        cout<<temp -> data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}



int main(){
   
    Node *node1 = new Node(10); //object
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 16);
    print(head);
    insertAtHead(head, 1);
    print(head);
    // cout<<"After reversing: "<<endl;
    // Node *newHead = reverseLinkedList(head);
    // print(newHead);

    
    cout<<"After reversing: "<<endl;
    Node *newHead = reverse(head);
    print(newHead);
}