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

int getLength(Node *head){
    int ctn = 0;
    while(head != NULL){
        ctn++;
        head = head -> next;
    }

    return ctn;
}

void findMiddle(Node *head){

    int len = getLength(head);
    int mid = (len/2);

    Node *temp = head;
    int ctn = 0;

    while (ctn < mid)
    {
      temp = temp -> next;
      ctn++;
    }
     
    cout<<temp->data;
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

   findMiddle(head);
} 