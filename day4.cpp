#include <iostream>
#include <vector>
using namespace std;
class Graph{
    int V;
    vector<vector<int>> adj;
    public:
    Graph(int vertics){
        V = vertics;
        adj.resize(V);      
    }
    void edges(int u,int v){
        adj[u].push_back(v);
        adj[v].push_back(u);
    }
    void print(){
        for(int i=0;i<V;i++){
            cout<<i<<"->";
            for(int neigh:adj[i]){
                cout<<neigh<<" ";
            }
            cout<<endl;
        }
    }
};
   

int main(){
    Graph g(5);
    g.edges(0, 1);
    g.edges(0, 2);
     g.edges(1, 3);
      g.edges(2, 4);
      g.print();
      return 0;

   
}


