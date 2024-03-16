#include<iostream>
using namespace std;

int main(){
    int a,b,c;
    cout<<"Enter Three sides a, b and c: ";
    cin>>a>>b>>c;
    if((a+b>c)&&(b+c>a)&&(c+a>b))
        cout<<"Valid Triangle";
    else  
        cout<<"invalid triangle";
    return 0;
}

/*
//Even number
#include<iostream>
using namespace std;
int main(){
    int no,i;
    cout<<"Enter the number: ";
    cin>>no;
    for(i=2;i<=no;i++){
        if(i%2==0)
          cout<<i<<endl;
    }
    return 0;
}
*/