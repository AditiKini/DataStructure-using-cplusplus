#include<iostream>
#include<set>

using namespace std;

int main(){
    set<int> s; //ascending
    set<int, greater<int>> s1; //descending

    s.insert(5);
    s.insert(1);
    s.insert(5);
    s.insert(7);
    s.insert(9);
    s.insert(5);
    s.insert(10);
    s.insert(10);
    s.insert(1);
    s.insert(4);

    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    s1.insert(5);
    s1.insert(1);
    s1.insert(5);
    s1.insert(7);
    s1.insert(9);
    s1.insert(5);
    s1.insert(10);
    s1.insert(10);
    s1.insert(1);
    s1.insert(4);

    for(int i:s1){
        cout<<i<<" ";
    }
    cout<<endl;

    cout<<"4 is present or not: "<<s.count(4)<<endl;

    set<int>::iterator it = s.begin();
    it++;  it++;
    s.erase(it);
    for(int i:s){
        cout<<i<<" ";
    }
    cout<<endl;

    set<int>::iterator itr = s.find(4);
    for(auto it=itr; it!=s.end(); it++){
        cout<<*it<<" ";
    }
    cout<<endl;

    //Delete element
    s1.
}























/* 
In programming, an iterator is an object that enables traversal or iteration over a collection of elements. 
To iterate over the elements of a std::set, you can use iterators.

code: 
#include <iostream>
#include <set>

int main() {
    std::set<int> mySet = {2, 4, 1, 3, 5};

    // Iterate over the elements using iterators
    std::set<int>::iterator it;
    for (it = mySet.begin(); it != mySet.end(); ++it) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;

    return 0;
}

In the above example, mySet.begin() returns an iterator pointing to the first element of the set, 
and mySet.end() returns an iterator pointing just past the last element. 
By using a for loop and incrementing the iterator (++it), you can iterate over the set and 
access each element using the dereference operator (*it).


In C++, the dereference operator (*) is used to access the value pointed to by a pointer or iterator. 
When applied to an iterator, the dereference operator retrieves the value of the element that the iterator 
is currently pointing to.

In the context of iterating over a std::set using iterators, the expression *it will give you the value of the element at the current position of the iterator it.
*/