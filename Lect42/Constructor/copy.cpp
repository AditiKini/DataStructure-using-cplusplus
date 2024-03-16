#include<iostream>
using namespace std;

class Sample{
    
    int x, y;     

    public:
        Sample(int x, int y){
            cout<<"Constructor is called"<<endl;
            this->x = x;
            this->y = y;   
        }


        Sample(Sample &ref){
            cout<<"Copy constructor is called"<<endl;
            this->x = ref.x;
            this->y = ref.y;
        }

        void print(){
            cout<<x<<" "<<y<<endl;
        }


};

int main(){
   Sample s1(10, 20);
   s1.print();

   //copy constructor
   Sample  s2(s1);
   s2.print();
}