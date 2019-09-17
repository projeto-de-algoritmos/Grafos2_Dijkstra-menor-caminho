#include <bits/stdc++.h>

using namespace std;
using ii = pair<int, int>;
using edge = tuple<int, int, int>;

const int MAX { 100010 }, oo { 1000000010 };

int dist[MAX], pred[MAX];
vector<ii> adj[MAX];
bitset<MAX> processed;

void dijkstra(int s, int N){
   for (int i = 1; i <= N; ++i) {
       dist[i] = oo;
       pred[i] = -1;
   }

   dist[s] = 0;
   pred[s] = s;
   processed.reset();

   priority_queue<ii, vector<ii>, greater<ii>> pq;
   pq.push(ii(0, s));

   while (not pq.empty()) {
       auto [d, u] = pq.top();
       pq.pop();

       if (processed[u])
           continue;

       processed[u] = true;

       for (const auto& [v, w] : adj[u]) {
           if (dist[v] > d + w) {
               dist[v] = d + w;
               pq.push(ii(dist[v], v));
               pred[v] = u;
           }
       }
   }
}

int main()
{
vector<edge> edges { edge(3, 8, 1), edge(5, 10, 1),
edge(7, 8, 1), edge(8, 9, 1), edge(9, 14, 1), edge(14, 19, 1),
edge(19, 24, 1), edge(24, 23, 1), edge(24,25,1) };

for (const auto& [u, v, w] : edges)
{
adj[u].push_back(ii(v, w));
adj[v].push_back(ii(u, w));
}

dijkstra(1, 6);

for (int u = 1; u <= 6; ++u)
{
cout << "dist(1," << u << ") = " << dist[u] << endl;

vector<int> path;
auto p = u;

while (p != 1) {
path.push_back(p);
p = pred[p];
}

path.push_back(1);
reverse(path.begin(), path.end());

for (size_t i = 0; i < path.size(); ++i)
cout << path[i] << (i + 1 == path.size() ? "\n" : " -> ");
}

return 0;
}
