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
vector<edge> edges { edge(1,2,1), edge(1,6,1), edge(2,7,1),edge(2,3,1), edge(3, 8, 1), edge(3,4,1), edge(4,5,1), 
edge(4,9,1), edge(5, 10, 1), edge(6,7,1), edge(7,12,1), edge(7, 8, 1), edge(8, 9, 1), edge(8,13,1), edge(9, 10, 1), 
edge(9, 14, 1), edge(10,15,1), edge(11,12,1), edge(11,16,1),edge(12,13,1),edge(12,17,1),edge(13,14,1),edge(13,18,1),
edge(14, 19, 1), edge(14,15,1), edge(15,20,1), edge(16,17,1),edge(16,21,1), edge(17,18,1), edge(17,22,1), edge(18,19,1),
edge(18,23,1), edge(19,20,1), edge(19, 24, 1), edge(20,25,1), edge(21,22,1),edge(22,23,1),edge(23, 24, 1), edge(24,25,1) };


for (const auto& [u, v, w] : edges)
{
adj[u].push_back(ii(v, w));
adj[v].push_back(ii(u, w));
}

dijkstra(1, 25);

for (int u = 1; u <= 25; ++u)
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
