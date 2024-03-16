#include<iostream>
using namespace std;

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
   
   Node *newNode = new Node(d);
   newNode -> next = head;
   head = newNode;
}

Node* reverseLinkedList(Node *head, int k){
      
      if(head == NULL ){
          return NULL;
      }

      Node *prev = NULL;
      Node *curr = head;
      Node *next = NULL;

      int count = 0;

      while (count < k && curr != NULL)
      {
         next = curr -> next;
         curr -> next = prev;
         prev = curr;
         curr = next;
         count++;
      }

      if(next != NULL){
         head -> next = reverseLinkedList(next, k);
      }
      
      return prev;
}


void print(Node *head){
   
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp -> next;
    }
    cout<<endl;
}

int main(){
    Node *node1 = new Node(10);
    Node *head = node1;
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 2);
    print(head);
    insertAtHead(head, 19);
    print(head);
    insertAtHead(head, 32);
    print(head);
     insertAtHead(head, 45);
    print(head);
   
    Node *newHead = reverseLinkedList(head, 2);
    print(newHead);

}