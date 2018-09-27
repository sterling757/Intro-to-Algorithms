#include "dijkstra.h"
#include <climits>
#include <queue>
#include <algorithm>
#include <utility>
#define INF INT_MAX //Infinity

using path = std::vector<int>;


Dijkstra::Dijkstra()
{

}
Dijkstra::Dijkstra(int numNodes, vector<BuildGraph> graph){
    this->numOfNodes = numNodes;
    this->adjToSearch = graph;
}

void Dijkstra::dijkstrasAlgo(int start, int end) {

    vector<int> min_distance( numOfNodes, INT_MAX );
      min_distance[ start - 1 ] = 0;
      set< std::pair<int,int> > active_vertices;
      active_vertices.insert( {0,start-1} );

      while (!active_vertices.empty()) {
        int where = active_vertices.begin()->second;
        if (where == end)
        {
          int cost = min_distance[where-1];
          // std::cout << "cost is " << cost << std::endl;
          path p{where};
          while (where != start) {
            int next = where;
            for (int i = 0; i < adjToSearch[where].connections.size(); i++)
            {
              // std::cout << "examine edge from " << where << "->" << e.to << " length " << e.length << ":";

              if (min_distance[adjToSearch[where].connections[i]] == INT_MAX)
              {
                // std::cout << e.to << " unexplored" << std::endl;
                continue;
              }

              if ((adjToSearch[where].weights[i] + min_distance[adjToSearch[where].connections[i]]) != min_distance[where-1])
              {
                // std::cout << e.to << " not on path" << std::endl;
                continue;
              }
              next = adjToSearch[where].connections[i];
              p.push_back(next);
              // std::cout << "backtracked to " << next << std::endl;
              break;
            }
            if (where==next)
            {
              // std::cout << "got lost at " << where << std::endl;
              break;
            }
            where = next;
          }
          std::reverse( p.begin(), p.end() );
          cout << cost , move(p);
        }
        active_vertices.erase( active_vertices.begin() );
        for (int i = 0; i < adjToSearch[where].connections.size(); i++){
          if (min_distance[adjToSearch[where].connections[i]] > ((min_distance[where] + adjToSearch[where].weights[i]))) {

            active_vertices.erase( { min_distance[adjToSearch[where].connections[i]], adjToSearch[where].connections[i] } );
            min_distance[adjToSearch[where].connections[i]] = ((min_distance[where] + adjToSearch[where].weights[i]));
            active_vertices.insert( { min_distance[adjToSearch[where].connections[i]], adjToSearch[where].connections[i] } );

          }
        }

      }
      cout << INT_MAX;


//    cout<<"Source is: "<<start<<". The shortest distance to every other vertex from here is: \n";
//    for(int i=1;i<=numOfNodes;i++)//Printing final shortest distances from source
//    {
//        cout<<"Vertex: "<<i<<" , Distance: ";
//        dis[i]!=INF? cout<<dis[i]<<"\n" : cout<<"-1\n";
//    }

    /*
    vector<int> dist(numOfNodes);
    vector<bool> vis(numOfNodes);
    vis[start-1] = true;
    for(int i = 0; i < numOfNodes; i++) {
      dist[i] = inf;
    }
    dist[start-1] = 0;

    for(int i = 0; i < numOfNodes; i++) {
      int cur = -1;
      for(int j = 0; j < numOfNodes; j++) {
        if (vis[j]) continue;
        if (cur == -1 || dist[j] < dist[cur]) {
          cur = j;
        }
      }

      vis[cur] = true;
      for(int j = 0; j < numOfNodes; j++) {
        int path = dist[cur] + adjToSearch[cur-1].weights[j];
        if (path < dist[j]) {
          dist[j] = path;
        }
      }
    }

    return dist[end];
*/
//    vector<int> min_distance(adjToSearch.size(), INT_MAX );

//    min_distance[ start ] = 0;

//    set< pair<int,int> > active_vertices;
//    active_vertices.insert( {0,start} );

//    while (!active_vertices.empty()) {

//        int where = active_vertices.begin()->second;
//        if (where == end)
//            return min_distance[where];
//        active_vertices.erase( active_vertices.begin() );
//        for (int i = 0; i <  adjToSearch[where]){
//            if (min_distance[ed.to] > min_distance[where] + ed.length) {
//                active_vertices.erase( { min_distance[ed.to], ed.to } );
//                min_distance[ed.to] = min_distance[where] + ed.length;
//                active_vertices.insert( { min_distance[ed.to], ed.to } );
//            }
//        }
}

