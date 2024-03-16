#include<iostream>
using namespace std;

class Kqueue{

    int *arr;
    int *front;
    int *rear;
    int *next;

    int n, k, freeSpot;

    public:

    Kqueue(int N, int K){
       this -> n = N;
       this -> k = K;

       front = new int[k];
       rear = new int[k];
       for(int i=0; i<k; i++){
        front[i] = -1;
        rear[i] = -1;
       }

       next = new int[n];
       for(int i=0; i<n; i++){
        next[i] = i+1;
       }
       next[n-1] = -1;

        arr = new int[n];

        freeSpot = 0;
    }

    void enqueue(int x, int qn){
        //overflow
        if(freeSpot == -1){
           cout<<"Queue is FULL"<<endl;
        }

        int index = freeSpot;

        freeSpot = next[index];

        if(front[qn-1] == -1){
            front[qn-1] = index;
        }
        else{
            next[rear[qn-1]] = index;
        }

        next[index] = -1;
        rear[qn-1] =  index;
        arr[index] = x;
    }

    int dequeue(int qn){
        if(front[qn-1] == -1){
            cout<<"Queue is Empty"<<endl;
        }

        int index = front[qn-1];
        front[qn-1]=next[index];
        next[index] = freeSpot;
        freeSpot = index;
        return arr[index];
    }

};


int main(){
    Kqueue q(9, 3);

    q.enqueue(10,1);
    q.enqueue(2, 1);
    q.enqueue(5, 2);
    q.enqueue(7, 2);
    q.enqueue(8, 1);
    q.enqueue(15, 3);
    q.enqueue(20,2);

    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(2)<<endl;
    cout<<q.dequeue(3)<<endl;
    cout<<q.dequeue(1)<<endl;
    cout<<q.dequeue(1)<<endl;
}