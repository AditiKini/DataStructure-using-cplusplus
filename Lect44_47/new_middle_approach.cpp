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


Node* findMiddle(Node *head){
  
  if(head == NULL || head -> next == NULL){
     return head;
  }
  
  Node *slow = head;
  Node *fast = head -> next;

  while (fast != NULL)
  {
    fast = fast -> next;
    if(fast != NULL){
        fast = fast -> next;
    }

    slow = slow -> next;
  }
  
   return slow;
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
    insertAtHead(head, 18);
    print(head);
    insertAtHead(head, 2);
    print(head);
    insertAtHead(head, 19);
    print(head);

   Node *ans = findMiddle(head);
   cout<<ans->data;
} 