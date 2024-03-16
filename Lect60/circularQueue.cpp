#include<iostream>
using namespace std;

class CircularQueue{

    private:
            int size;
            int *arr;
            int rear;
            int front;
    public:

           CircularQueue(int n){
               this -> size = n;
               arr  = new int[size];
               front = -1;
               rear = -1;
           }

            int enqueue(int data){
                if((front == 0 && rear == size-1) || (rear == (front-1)%(size-1))){
                    cout<<"Queue is Full"<<endl;
                    return -1;
                }
                if(front == -1){
                    front = rear = 0;
                }
                else if(front != 0 && rear == size - 1){
                    rear = 0;
                }
                else{
                    rear++;
                }
                arr[rear] =  data;
           }

           int dequeue(){
              if(front == -1){
                cout<<"Queue is Empty"<<endl;
                return -1;
              }

              int ans = arr[front];
              arr[front] = -1;

              if(front == rear){
                front = rear = -1;
              }
              else if(front == size -1){
                front = 0;
              }
              else{
                front++;
              }

              return ans;
           }

};

int main(){
   
   CircularQueue cq(5);
   cout<<cq.enqueue(10)<<endl;
   cout<<cq.enqueue(16)<<endl;
   cout<<cq.enqueue(14)<<endl;
   cout<<cq.enqueue(15)<<endl;
   cout<<cq.enqueue(18)<<endl;
    cout<<cq.enqueue(19)<<endl;
   cout<<cq.dequeue()<<endl;
   cout<<cq.dequeue()<<endl;
   cout<<cq.dequeue()<<endl;
   cout<<cq.dequeue()<<endl;
   cout<<cq.dequeue()<<endl;
   cout<<cq.dequeue()<<endl;
   
}