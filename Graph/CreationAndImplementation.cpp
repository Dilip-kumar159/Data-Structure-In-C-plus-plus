#include<iostream>
#include<vector>

using namespace std;

// creation of graph adding edges in undirected graph

void addEdge(vector<int> adj[], int u, int v){

    // Undirected Graph
    adj[u].push_back(v);
    adj[v].push_back(u);

    // Directed Graph
    // adj[u].push_back(v);

}

void printGraph(vector<int> adj[], int n){

    for(int i=0; i<n; i++){

        cout<<"Adjacency List of Nodes "<< i << endl;
        cout<<"Node -> ";

        for(auto j : adj[i]){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){

    int n, m;
    cout <<"Enter Nodes and edges "<<endl;
    cin>>n>>m;

    vector<int> adj[n+1];

    // addEdge(adj, 1, 2);
    // addEdge(adj, 1, 3);
    // addEdge(adj, 2, 4);
    // addEdge(adj, 3, 4);
    // addEdge(adj, 2, 5);
    // addEdge(adj, 4, 5);
    // printGraph(adj, N+1);

    for(int i=0; i<m; i++){

        int u, v;
        cout<<"Enter edges -> "<<endl;
        cin>> u >> v;

        addEdge(adj, u, v);
    }
    printGraph(adj, n+1);

    return 0;
}