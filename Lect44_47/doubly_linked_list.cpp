#include<iostream>
using namespace std;

class Node{

    public:
           
           int data;
           Node *prev;
           Node *next;

           Node(int data){
              this -> data = data;
              this -> prev = NULL;
              this -> next = NULL;
           }

           ~Node(){
               int value = this -> data;
               if(this->next != NULL){
                  delete next;
                  this -> next = NULL;
               }
               cout<<"memory is free for node with data "<<value<<endl;
           }
};




void insertAtHead(Node* &head, Node* &tail,  int d){
    
    if(head  == NULL){
        Node *temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{
        Node *temp = new Node(d);
        temp -> next = head;
        head -> prev = temp;
        head = temp;
    }
}





void insertAtTail(Node* &head, Node* &tail, int d){
    
    if(tail == NULL){
       Node *temp = new Node(d);
       tail = temp;
       head = temp;
    }
    else{
        Node *temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
    
}





void insertAtMiddle(Node* &head, Node* &tail, int position, int d){

    //insert as start
    if(position == 1){
       insertAtHead(head, tail, d);
       return ;
    }

    Node *temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp->next;
        count++;
    }
    
    //insert at end
    if(temp -> next == NULL){
        insertAtTail(head, tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}



void deleteNode(Node* &tail, Node* &head, int position){
    
    if(position == 1){
       Node *temp = head;
       temp -> next -> prev = NULL;
       head = temp -> next;
       temp -> next = NULL;

       delete temp;
    }
    else{
       
        Node *current = head;
        Node *prev = NULL;


        int count = 1;

        while (count < position)
        {
           prev = current;
           current=current->next;
           count++;
        }
        
        if(current->next == NULL){
           tail = prev;
        }

        current -> prev = NULL;
        prev->next = current->next;
        current -> next = NULL;
        delete current;
    }
}



void print(Node* &head){
    
    Node *temp = head;

    while(temp != NULL){
        cout<<temp ->data<<" ";
        temp = temp->next;
    }
    cout<<endl;
}




int getLength(Node* &head){

    int len = 0;
    Node *temp = head;

    while(temp != NULL){
        len++;
        temp = temp->next;
    }
    
    return len;
}

int main(){
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;
    // print(head);
    // cout<<getLength(head)<<endl;

    Node *head = NULL;
    Node *tail = NULL;

    insertAtHead(head, tail, 12);
    print(head);

    insertAtHead(head, tail, 11);
    print(head);

    insertAtTail(tail, tail, 400);
    print(head);

    insertAtMiddle(head, tail, 2, 24);
    print(head);

    deleteNode(tail, head, 1);
    print(head);

    cout<<"Head: "<<head -> data<<endl;
    cout<<"Tail: "<<tail -> data<<endl;

} 
