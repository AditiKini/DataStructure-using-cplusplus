/*

   *
  **
 ***
****

while (i<=n)
{
    int space=n-i; //3
    while (space)  //3 2 1
    {
        cout<<" ";
        space-=1;
    }
    int j=1;
    while(j<=i){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i++;   
}
*/

/*
****
***
**
*

while (i<=n)
{
    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j=j+1;
    }
    cout<<endl;
    i++;
}

*/

/*

****
 ***
  **
   *

int i=1;
while (i<=n)
{
    //spaces
    int space = i-1;
    while(space){
        cout<<" ";
        space-=1;
    }

    //star
    int j=1;
    while(j<=n-i+1){
        cout<<"*";
        j++;
    }
    cout<<endl;
    i=i+1;  
}

*/

/*

1111
 222
  33
   4

same as previous just change *=>i
*/


/*
1234
 234
  34
   4

space logic is same.

int j=1;
        while(j<=n-i+1){
            cout<<i+j-1;
            j++;
        }
        cout<<endl;
        i=i+1;  

*/

/*

   1
  22
 333
4444

while (i<=n)
{
    //spaces
    int space = n-i;
    while(space){
        cout<<" ";
        space-=1;
    }

    //star
    int j=1;
    while(j<=i){
        cout<<i;
        j++;
    }
    cout<<endl;
    i=i+1;  
}

*/

/*

   1
  23
 456
78910

*/

#include<iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    int count=1;
    int i=1;
    while (i<=n)
    {
        //spaces
        int space = n-i;
        while(space){
            cout<<" ";
            space-=1;
        }

        //star
        int j=1;
        while(j<=i){
            cout<<count;
            count+=1;
            j++;
        }
        cout<<endl;
        i=i+1;  
    }
  return 0;

}