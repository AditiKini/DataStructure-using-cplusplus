#include<iostream>
using namespace std;

class Sample{
    
    int x, y;     //by default they are private members

    public:
        Sample(int x, int y){
            cout<<"Constructor is called"<<endl;
            this->x = x;
            this->y = y;   
        }

        void print(){
            cout<<x<<" "<<y<<endl;
        }


};

int main(){
   Sample obj1(10, 20);
   obj1.print();
}