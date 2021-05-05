#include<bits/stdc++.h>
using namespace std;
 
int n, l, a, b;
vector<vector<int>> graph;
vector<int> color;
 
bool recolor(int u) {
    bool ret = true;
    for(int i = 0; i < graph[u].size(); i++) {
        if(color[graph[u][i]] != 0 && color[graph[u][i]] == color[u]) {
            return false;
        }
        if(color[graph[u][i]] == 0) {
            color[graph[u][i]] = (color[u] == 1? 2 : 1);
            ret = ret & recolor(graph[u][i]);
        }
    }
    return ret;
}
 
int main() {
    for(;;) {
        scanf("%d", &n);
        if(n == 0) break;
        scanf("%d", &l);
 
        graph.clear();
        graph.resize(n);
        color.assign(n, 0);
        for(int i = 0; i < l; i++) {
            scanf("%d %d", &a, &b);
            graph[a].push_back(b);
            graph[b].push_back(a);
        }
 
        color[0] = 1;
        printf("%s\n", recolor(0)? "BICOLORABLE." : "NOT BICOLORABLE.");
    }
}