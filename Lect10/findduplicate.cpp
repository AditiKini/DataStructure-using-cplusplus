#include<iostream>
using namespace std;

void findDuplicate(int arr[], int size){
   
   int ans=arr[0];

   for(int i=3; i<=7; i++){
      ans = ans ^ i;
   }

   for(int i=0; i<size; i++){
      ans = ans^arr[i];
   }

   cout<<ans;
}

int main()
{
    int num[7]={2, 3, 4, 4, 5, 6, 7};
    findDuplicate(num, 7);
}


