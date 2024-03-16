/*
Count Number of 1 bits in given binary no.
Ex:- 00000000000000000000000000000101
output:2
*/
#include<iostream>
using namespace std;

void decToBinary(int n)
{

    int binaryNum[32];
 
    int i = 0;
    while (n > 0) {
 
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    // int count=0;
    // while(binaryNum[i]!=0){
    //     if(binaryNum&1){
    //        count++;
    //     }
    //     binaryNum=binaryNum>>1;
    // }
    // cout<<count;

     int count=0;
     for (int j = i - 1; j >= 0; j--){
        if(binaryNum[j]&1){
            count++;
        }
     }
     cout<<count;

}

int main(){
    int n = 2;
    decToBinary(n);
    
}