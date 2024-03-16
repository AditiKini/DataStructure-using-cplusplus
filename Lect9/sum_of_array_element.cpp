#include<iostream>
using namespace std;

int sum_of_arrray(int arr[],int size){
   
    int sum = 0;
    for(int i=0; i<size ; i++){
        sum+=arr[i];
    }
    return sum;
}

int main(){
   int num[50],size;

   cout<<"Enter size of array: "<<endl;
   cin>>size;

   cout<<"Enter the array elements: "<<endl;
   for(int i=0; i<size; i++){
     cin>>num[i];
   }

   cout<<"Sum of array element is: "<<sum_of_arrray(num, size);

}