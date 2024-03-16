#include<iostream>
using namespace std;


class Sample{

  private:
      int health;
  public:
      char level;
      static int x;

      int setHealth(int h){
         health = h;
      }

      int getHealth(){
        return health;
      }

      static int Value(){
        return x;
      }

};

int Sample::x=10;

int main(){

    //static Allocation
    // Sample s1;
    // s1.level='A';
    // s1.setHealth(90);
    // cout<<"Health: "<<s1.getHealth()<<endl;
    // cout<<"Level: "<<s1.level<<endl;

    //dynamic Allocation
    // Sample *s2 = new Sample;
    // s2->level='B';
    // (*s2).setHealth(40);

    // cout<<"Health: "<<(*s2).getHealth()<<endl;
    // cout<<"Level: "<<s2->level<<endl;


    // static function and data members

    cout<<Sample::x<<endl;

    Sample s3;
    cout<<s3.x<<endl;

    cout<<Sample::Value()<<endl;
}