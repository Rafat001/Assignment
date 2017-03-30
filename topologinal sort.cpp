#include<stdio.h>
#include<iostream>
#include <stack>
#include<set>
using namespace std;
stack<int>s;
set<int>sett;
int adjacency[100][100],node,edge;
bool visited[100];
void dfs(int source)
{
    visited [source]=true;
    int i;
    for(i=1; i<=node; i++)
    {
        if(adjacency[source][i]==1 && !visited[i])
        {
        dfs(i);
    }
    }
    s.push(source);
    sett.erase(source);
}

int main()
{
    int u,v,i;
    cout<<"enter number of vertex and edges: ";
    cin>>node>>edge;
    for(i=1; i<=edge; i++)
    {
        cin>>u>>v;
        sett.insert(u);
        sett.insert(v);
        adjacency[u][v]=1;
    }
    set<int>::iterator it;
    while(!sett.empty())
    {
        it=sett.begin();
        dfs(*it);

    }
    cout<<"topological sorted value are:"<<endl;
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    return 0;
}


