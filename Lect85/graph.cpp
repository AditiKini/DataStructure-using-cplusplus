#include <iostream>
#include<unordered_map>
#include<list>
using namespace std;
template <typename T>

class graph{
    public:
           unordered_map<T, list<T>> adjlist;
           
           void addEdge(T u, T v, bool direction){
               // 0 -> undirected graph
               // 1 -> directed graph
               
               adjlist[u].push_back(v);
               
               if(direction == 0){
                   adjlist[v].push_back(u);
               }
           }
           
           void printGraph(){
               for(auto i: adjlist){
                   cout<<i.first<<"->";
                   for(auto j: i.second){
                       cout<<j<<", ";
                   }cout<<endl;
               }
           }
};

int main(){
    int n,m;
    cout<<"Enter the No of nodes: "<<endl;
    cin>>n;
    
    cout<<"Enter the No of edges: "<<endl;
    cin>>m;
    
    graph<int> g;
    
    for(int i=0; i<m; i++){
        int u, v;
        cin>>u>>v;
        g.addEdge(u, v, 0);
    };
    
    g.printGraph();
    
    return 0;
    
}