#include<bits/stdc++.h>
// #include
using namespace std;

void makeGraph(vector<int> adj[], int u, int v)
{
    adj[u].push_back(v);
    adj[v].push_back(u);
}

printGraph(vector<int> adj[], int v)
{
    for(int i=0;i<v; i++)
    {
        // cout<<endl;
        cout<<"\nFor "<<i<<": ";
        for(auto x: adj[i])
        {
            cout<<x;
        }
    }
}
int main()
{
    int v=5;
    // cin>>v;
    vector<int> adj[v];
    // makeGraph(adj,u,v);
    makeGraph(adj,0,1);
    makeGraph(adj,0,2);
    makeGraph(adj,0,3);
    makeGraph(adj,1,2);
    makeGraph(adj,1,3);
    makeGraph(adj,2,3);
    // printGraph(adj,v);
    printGraph(adj,4);
    return 0;
}
