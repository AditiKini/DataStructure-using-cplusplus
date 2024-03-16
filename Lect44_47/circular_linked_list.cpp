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

            ~Node(){
                int value = this -> data;
                if(this->next != NULL){
                    delete next;
                    this -> next = NULL;
                }
                cout<<"memory is free for node with data "<<value<<endl;
            }
};

void insertNode(Node* &tail, int element, int d){

    //empty list
    if(tail == NULL){
        Node *newNode = new Node(d);
        tail = newNode;
        newNode -> next = newNode;
    }
    else{
        //list is not empty

        Node *current = tail;

        while(current -> data != element)
        {
            current = current->next;
        }

        Node *temp = new Node(d);
        temp -> next = current -> next;
        current-> next = temp;
    }

}


void deleteNode(Node* &tail, int value){

   if(tail == NULL){
     cout<<"List is empty, check once again!!!!";
     return ;
   }
   else{
      
       Node *prev = tail;
       Node *current = prev -> next;

       while (current -> data != value)
       {
           prev = current;
           current = current -> next;
       }
       
       prev -> next = current -> next;

       if(current == prev){
          tail == NULL;
       }

       if(tail == current){
         tail = prev;
       }

       current -> next = NULL;
       delete current;
   }
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

void print(Node* &tail){
    
    Node *temp = tail;

    if(tail == NULL){
        cout<<"List is empty"<<endl;
    }
    
    do{
        cout<<tail->data<<" ";
        tail = tail -> next;

    }while (tail != temp);
    
    cout<<endl;
}



int main(){
   
   Node *tail = NULL;

   insertNode(tail, 2, 4);
   print(tail);

//    insertNode(tail, 4, 6);
//    print(tail);

//    insertNode(tail, 4, 5);
//    print(tail);

//   insertNode(tail, 6, 7);
//    print(tail);

//    deleteNode(tail, 5);
//    print(tail);

   if(isCircular(tail)){
    cout<<"Link List is circular"<<endl;
   }
   else{
     cout<<"Link List is not circular"<<endl;
   }
} 