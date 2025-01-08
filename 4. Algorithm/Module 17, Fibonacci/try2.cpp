#include <bits/stdc++.h>
using namespace std;
const int N = 100;
vector<pair<int, int>> v[N];
int dis[N];
class cmp
{
public:
   bool operator()(pair<int, int> a, pair<int, int> b)
   {
      return a.second > b.second;
   }
};

void dijkstra(int src)
{
   priority_queue<pair<int, int>, vector<pair<int, int>>, cmp> pq;
   
   dis[src] = 0;
   while (!pq.empty())
   {
      pair<int, int> parent = pq.top();
      pq.pop();
      int node = parent.first;
      int cost = parent.second;
      for (pair<int, int> child : v[node])
      {
         int childNode = child.first;
         int childCost = child.second;
         if (cost + childCost < dis[childNode])
         {
            
            dis[childNode] = cost + childCost;
            pq.push({childNode, dis[childNode]});
         }
      }
   }
}
int main()
{
   int n, e;
   cin >> n >> e;
   while (e--)
   {
      int a, b, c;
      cin >> a >> b >> c;
      v[a].push_back({b, c});
      v[b].push_back({a, c});
   }
   for (int i = 0; i < n; i++)
   {
      dis[i] = INT_MAX;
   }
   int src;
   cin >> src;
   dijkstra(src);
   int t;
   cin >> t;
   while (t--)
   {

      int d, dw;
      cin >> d >> dw;
      for (int i = 0; i < n; i++)
      {

         if (dis[src] + dw < dis[d])
         {
            cout << "YES" << endl;
            break;
         }
         else
         {
            cout << "NO" << endl;
            break;
         }
      }
   }

   return 0;
}