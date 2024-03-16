#include<iostream>
using namespace std;

class Stack{

    public:
        int top;
        int size;
        int *arr;

        Stack(int s){
            this -> size = s;
            top = -1;
            arr = new int[size];
        }

        void push(int element){
            if(size - top > 1){
                arr[++top] = element;
            }
            else{
                cout<<"Stack is Overflow";
            }
        }

        void pop(){
            if(top >=0 ){
                top--;
            }
            else{
                cout<<"Stack is underflow";
            }
        }

        int peek(){
            if(top >= 0){
                return arr[top];
            }
            else{
                cout<<"Stack is empty";
            }
        }

        bool isEmpty(){
            if(top == -1){
                return true;
            }
            return false;
        }

};

int main(){
    Stack st(5);
    st.push(12);
    st.push(23);
    st.push(12);
    st.push(23);
    st.push(12);
    st.push(10);
    // cout<<"TOP element is: "<<st.peek()<<endl;
    // st.pop();
    // cout<<"TOP element is: "<<st.peek()<<endl;
    // st.pop();
    // if(st.isEmpty()){
    //     cout<<"Stack is Empty"<<endl;
    // }
    // else{
    //     cout<<"Stack is not Empty"<<endl;
    // }


}