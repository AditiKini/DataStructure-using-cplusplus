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

void insertAtTail(Node* &tail, int d){
   
   Node *temp = new Node(d);
   tail -> next  = temp;
   tail = temp;
}

//using map data structure
bool detectLoop(Node *head){
     
    if(head == NULL){
        return false;
    }

    Node *temp = head;
    map<Node*, bool> visited;

    while (temp != NULL)
    {
        if(visited[temp] == true){
            cout<<"Starting Node of Loop is "<<temp->data<<endl;
            return true;
        }

        visited[temp] = true;
        temp = temp -> next;
    }
    
    return false;
}


//using floyd'd detection cycle
Node* floydDetectLoop(Node *head){
    
    if(head == NULL){
        return NULL;
    }

    Node *slow = head;
    Node *fast = head;

    while (slow != NULL && fast != NULL)
    { 
        fast = fast -> next;
        if(fast != NULL){
            fast = fast -> next;
        }

        slow = slow -> next;

        if ( slow == fast)
        {
            return slow;
        }
        
    }

    return NULL;
}

Node* statingNodeOfLoop(Node *head){

    if(head == NULL){
        return NULL;
    }

    Node *intersection = floydDetectLoop(head);
    Node *slow = head;

    while (slow != intersection)
    {
        slow = slow ->next;
        intersection = intersection -> next;
    }
    
    return slow;
}

void removeLoop(Node *head){
    
    if(head == NULL){
        return ;
    }

    Node *startOfLoop = statingNodeOfLoop(head);
    Node *temp = startOfLoop;

    while (temp -> next != startOfLoop)
    {
        temp = temp -> next;
    }
    
    temp -> next = NULL;
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

    //==========Insert At begining===========
    print(head);
    insertAtHead(head, 12);
    print(head);
    insertAtHead(head, 15);
    print(head);
     insertAtHead(head, 22);
    print(head);

    cout<<"Head: "<<head -> data<<endl;
    cout<<"Tail: "<<tail -> data<<endl;

    tail -> next = head ->next -> next;
    
    /* if(detectLoop(head)){
        cout<<"LOOP is present"<<endl;
    }
    else{
        cout<<"LOOP is not present"<<endl;
    } */
    
    // using Floyd Loop Detection
    if(floydDetectLoop(head) != NULL){
        cout<<"LOOP is present"<<endl;
    }
    else{
            cout<<"LOOP is not present"<<endl;
        }
    
    //Starting point of Loop
    Node *ans = statingNodeOfLoop(head);
    cout<<"Start at "<<ans->data<<endl;

    //Remove LOOP
    removeLoop(head);
    cout<<"After remove Loop"<<endl;
    
    //Check Again whether loop is present or not.
    if(floydDetectLoop(head) != NULL){
       cout<<"LOOP is present"<<endl;
    }
    else{
        cout<<"LOOP is not present"<<endl;
    }

}
