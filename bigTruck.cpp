#include<iostream>
#include<vector>
#include<string>
#include<list>
#include<limits>
#include<set>
#include<utility>
#include<algorithm>
#include<iterator>

using namespace std;

struct edge { int to, length; };

int dijkstra(const vector< vector<edge> > &graph, int source, int target) {
	vector<int> min_distance(graph.size(), INT_MAX);
	min_distance[source] = 0;
	set< pair<int, int> > active_vertices;
	active_vertices.insert({ 0, source });

	while (!active_vertices.empty()) {
		int where = active_vertices.begin()->second;
		if (where == target) return min_distance[where];
		active_vertices.erase(active_vertices.begin());
		for (auto ed : graph[where])
			if (min_distance[ed.to] > min_distance[where] + ed.length) {
				active_vertices.erase({ min_distance[ed.to], ed.to });
				min_distance[ed.to] = min_distance[where] + ed.length;
				active_vertices.insert({ min_distance[ed.to], ed.to });
			}
	}
	return INT_MAX;
}
int main(){
	
	int n;
	vector<edge> *graph;
	int *items;
	
	cin >> n;
	//initialize item array
	items = new int[n];
	//initialize graph
	graph = new vector<edge>[n];

	for (int i = 0; i < n; i++){
		cin >> items[i];
	}
	//create the city
	int m, a, b, d;
	edge edge1;
	cin >> m;
	for (int i = 0; i < m; i++){
		cin >> a >> b >> d;
		graph[a].assign(b, d);
	}
	//dijkstra
	

	return 0;
}

