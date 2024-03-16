#include<iostream>
using namespace std;

bool linear_search(int arr[], int size, int key){
    
    for(int i=0; i<size; i++){

        if(key == arr[i])
          return 1;
    }

    return 0;
}

int main(){

   //Array declaration
   int num[10]={1,3,-6,22,8,7,1,-6,44,22};

   int key;
   cout<<"Enter the element you want to search: ";
   cin>>key;

   bool found = linear_search(num, 10, key);

    if(found)
      cout<<"Key is present."<<endl;
    else
      cout<<"Key is absent."<<endl;
}

//Time complexity: O(n)
//space complexity: O(1)