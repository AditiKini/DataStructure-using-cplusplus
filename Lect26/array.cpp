#include<iostream>
using namespace std;

int main(){

    /*
    int arr[4] = {10,20,30,40};
    
    cout<<"first: "<<arr[0]<<endl;
    cout<<"first-1: "<<*arr<<endl;

    cout<<"second: "<<arr<<endl;
    cout<<"second-1: "<<&arr[0]<<endl;

    cout<<"third: "<<arr[2]<<endl;
    cout<<"third-1: "<<*(arr+2)<<endl;

    cout<<"fourth: "<<*(arr) + 1<<endl;

    int i=2;
    cout<<i[arr]<<endl;
    
    cout<<i[&arr]<<endl;

   */

    /*
    //sizeof operator
    int temp[10] = {1,2,3,4,5,6,7,8,9,0};

    cout<<sizeof(temp)<<endl; //40
    cout<<sizeof(&temp)<<endl;//8
    cout<<sizeof(*temp)<<endl; //4

    int *ptr = &temp[0];
    cout<<sizeof(ptr)<<endl; //8
    cout<<sizeof(&ptr)<<endl; //8
    cout<<sizeof(*ptr)<<endl; //4

    */

   //address of operator
    /*
   int a[10]={0};
   cout<<"=======>"<<&a<<endl;

   int *p=&a[0];
   cout<<"=======>"<<&p<<endl;

   */

  int a[10];

 // a = a+1; Error

 int *ptr = &a[0];
 cout<<ptr<<endl;
 ptr=ptr+1;
 cout<<ptr<<endl;

}