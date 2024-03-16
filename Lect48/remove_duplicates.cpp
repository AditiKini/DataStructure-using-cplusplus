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

};


void insertAtHead(Node* &head, int d){
    
    Node *temp = new Node(d); //next new node creation
    temp -> next = head;
    head = temp;
}

void deleteDuplicateInSortedLL(Node *head){
    if(head == NULL){
        return ;
    }

    Node *curr = head;

    while (curr != NULL)
    {
       if((curr -> next != NULL) && curr -> data == curr -> next -> data){
           Node *next_next = curr -> next -> next;
           Node *deletetoNode = curr -> next;
           delete(deletetoNode);
           curr -> next = next_next;
       }
       else{
          curr = curr -> next;
       }
    }
    
}

void deleteDuplicateInUnSortedLL(Node *head){
      
    if(head ==  NULL)
        return ;
    
    Node *curr = head;
    while (curr != NULL)
    {
       Node *temp = curr -> next;
       Node *prev = NULL;

       while (temp != NULL)
       {
          if(curr -> data == temp -> data){
              Node *next = temp -> next;
              Node *deletetoNode = temp;
              delete(deletetoNode);
              prev -> next = next;
              temp = next;
          }
          
          else{
             prev = temp;
             temp = temp -> next;
          }
       }

       curr = curr -> next;
       
    }
    
}

void deleteDuplicateUsingMap(Node *head){
    
    if(head == NULL){
        return;
    }

    map<int, bool> visited;
    Node *curr = head;
    Node *prev = NULL;

    while (curr != NULL)
    {
        if(visited[curr->data] == true){
           Node *next = curr -> next;
           Node *del = curr;
           delete del;
           prev -> next = next;
           curr = next;
        }
        else{
            visited[curr->data] = true;
            prev = curr;
            curr = curr -> next;
        }   
        
    } 

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
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
    insertAtHead(head, 10);
    print(head);
    insertAtHead(head, 4);
    print(head);
    insertAtHead(head, 12);
    print(head);  

    // deleteDuplicateInSortedLL(head);
    // print(head);


    // deleteDuplicateInUnSortedLL(head);
    // print(head);

    deleteDuplicateUsingMap(head);
    print(head);
}