#include<iostream>
#include<map>
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

            ~Node(){
                int value = this -> data;
                if(this->next != NULL){
                    delete next;
                    this -> next = NULL;
                }
                cout<<"memory is free for node with data "<<value<<endl;
            }
};


void insertAtHead(Node* &head, int d){
    
    Node *temp = new Node(d); //next new node creation
    temp -> next = head;
    head = temp;
}

void insertAtTail(Node* &tail, int d){
   
   Node *temp = new Node(d);
   tail -> next  = temp;
   tail = temp;
}

void insertAtMiddle(Node* &tail, Node* &head, int position, int d){

    //insert as start
    if(position == 1){
       insertAtHead(head, d);
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
        insertAtTail(tail, d);
        return;
    }

    Node *nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next = nodeToInsert;
}


void deleteNode(Node* &tail, Node* &head, int position){
    
    if(position == 1){
       Node *temp = head;
       head = head -> next;
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

        prev->next = current->next;
        current -> next = NULL;
        delete current;

    }
}

bool detectLoop(Node* head){
   
    if(head == NULL){
        return false;
    }

    Node* slow = head;
    Node* fast = head;

    while(slow != NULL && fast != NULL){

        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if(slow == fast){
            return true;
        }
    }

   return false;
}


bool isCircular(Node *head){
    if(head == NULL){
        return true;
    }

    Node *temp = head -> next;
    while (temp != head && temp != NULL)
    {
       temp = temp -> next;
    }

    if(temp == head)
       return true;
    else
       return false;
    
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

    // ==========Insert At begining===========
    // print(head);
    insertAtHead(head, 12);
    // print(head);
    insertAtHead(head, 15);
    // print(head);

    //==========Insert At Ending===========
    // print(head);
    insertAtTail(tail, 12);
    // print(head);
    insertAtTail(tail, 15);
    // print(head);

 //   tail -> next = head -> next;
   
   // insertAtMiddle(tail, head, 4, 22);
    // print(head);


    // deleteNode(tail, head, 4);
    // print(head);

    if(detectLoop(head)){
        cout<<"Loop is present";
    }
    else{
        cout<<"Loop is not present";
    }


    cout<<"Head: "<<head -> data<<endl;
    cout<<"Tail: "<<tail -> data<<endl;

    /*
    if(isCircular(head)){
    cout<<"Link List is circular"<<endl;
   }
   else{
     cout<<"Link List is not circular"<<endl;
   }

   */
    
}