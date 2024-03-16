#include <iostream>
#include<unordered_map>
#include<map>
using namespace std;


bool UniqueOccur(int arr[], int size){
    
    map<int, int> digitCount;
    
    for(int i=0; i<size; i++){
        digitCount[arr[i]]++;
    }

    unordered_map<int, int> uniqueCount;

    bool unique = true;
    for(const auto& pair : digitCount){
        if(uniqueCount.count(pair.second) > 0){
            unique = false;
            break;
        }

        uniqueCount.insert({pair.second, 1});
    }

    return unique;
}


int main(){
    int arr[13] = {1, 2, 3, 2, 2, 3, 3, 3, 4, 4, 4, 4, 4};
    int size = sizeof(arr)/sizeof(arr[0]);
    cout<<size;

    // if(UniqueOccur(arr, size)){
    //     cout<<"Element counts are unique.";
    // }
    // else{
    //     cout<<"Element counts are not unique.";
    // }
}