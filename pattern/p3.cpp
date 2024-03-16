#include<iostream>
using namespace std;

int main(){
  int n;
  cin>>n;
  int i=1;
  while(i<=n){
     int j=1;
     while(j<=i){
        cout<<i-j+1<<" ";
        j++;
     }
     cout<<endl;
     i++;
  }
  return 0;
}

/*

3. pattern:
123
123
123

code:
int n;
   cin>>n;
   int i=1;
   while(i<=n)
   {
        int j=1;
        while (j<=n)
        {
           cout<<j;
           j++;
        } 
        cout<<endl;
        i++;
}

*/

/*
4. Pattern:
321
321
321

code:
int n;
   cin>>n;
   int i=1;
   while(i<=n){
      int j=1;
      while (j<=n)
      {
        cout<<n-j+1;
        j++;
      }
      cout<<endl;
      i++;
   }
*/


/*
5. Pattern
123
456
789
code:
int n, count=0;
  cin>>n;
  int i=1;

  while (i<=n)
  {   
      int j=1;
      while(j<=n){
         cout<<++count;
         j++;
      }
    cout<<endl;
    i++;
  }
*/

/*
Pattern:
*
**
***
****

code:

int n;
  cin>>n;
  
  int i=1;

  while (i<=n)
  {   
      int j=1;
      while (j<=i)
      {
         cout<<"*";
         j++;
      }
      cout<<endl;
      i++;
      
  }

*/

/*
Pattern:
4
1 
2 2 
3 3 3 
4 4 4 4 

code:
int n;
  cin>>n;
  
  int i=1;

  while (i<=n)
  {   
      int j=1;
      while (j<=i)
      {
         cout<<i<<" ";
         j++;
      }
      cout<<endl;
      i++;
      
  }
  return 0;

*/

/*
1
23
345
4567
56789

code 1:
int i=1;
  while (i<=n)
  {   
      int j=1;
      int val=i;
      while (j<=i)
      {
         cout<<val;
         val=val+1;
         j++;
      }
      cout<<endl;
      i++;
      
  }

code 2:
 cout<<i+j-1;

*/