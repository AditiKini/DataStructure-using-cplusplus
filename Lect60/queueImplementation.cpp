#include<iostream>
using namespace std;

class Queue{

    private:
           int size;
           int *arr;
           int qfront;
           int qrear;
    
    public:
          
          Queue(int size){
            this -> size = size;
            arr = new int[size];
            qfront = 0;
            qrear = 0;
          }

          //push
          void enqueue(int data){
              if(qrear == size){
                  cout<<"Queue is FULL"<<endl;
              }
              else{
                arr[qrear] = data;
                qrear++;
              }
          }

          //pop
        int dequeue(){
             if(qfront == qrear){
                return -1;
             }
             else{
                int ans = arr[qfront];
                arr[qfront] = -1;
                qfront++;
                if(qfront == qrear){
                    qfront = 0;
                    qrear = 0;
                }
                return ans;
             }
          }

          //empty
          bool isEmpty(){

            if(qfront == qrear){
                return true;
            }
            return false;
          }

          //top
          int front(){
            if(qfront == qrear){
                cout<<"Queue is empty"<<endl;
            }
            else{
                return arr[qfront];
            }

          }
};



int main(){
     
     Queue q(10);
     q.enqueue(12);
     q.enqueue(2);
     q.enqueue(8);
     q.enqueue(11);
     q.enqueue(5);
    

     cout<<q.front()<<endl;

     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;
     cout<<q.dequeue()<<endl;

     if(q.isEmpty()){
        cout<<"Queue is Empty"<<endl;
     }
     else{
        cout<<"Queue is not empty"<<endl;
     }

     
}