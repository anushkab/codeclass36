#include <cstdio>
#include <cstdlib>
#include <cstring>
#include <cassert>
#include <cmath>
#include <climits>

#include <sstream>
#include <iostream>
#include <iomanip>
#include <map>
#include <unordered_map>
#include <set>
#include <unordered_set>
#include <queue>
#include <stack>
#include <utility>
#include <vector>
#include <functional>
#include <algorithm>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long double ld;
typedef long long ll;
typedef pair <int, int> pii;
typedef pair <ll, ll> pll;

const int max_N = 1e5 + 10;
const ll inf = 1e9 + 42;

int dist[max_N];
vector<int> E[max_N];

void bfs(int source, int N);

int main()
{
	fast_cin();

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		int u, v;
		cin >> u >> v;

		/*
		 * Note that we are storing the edges in adjacency list form.
		 * So you want to push an edge going to v
		 * to the adjacency list of u = E[u].
		 * And similarly an edge going to u to E[v].
		 *
		 * note also that since the edges are unweighted, we're just
		 * storing them as int values.
		 */
	}
}

void bfs(int source, int N)
{
	/*
	 * Initialisation:
	 * 1. Set the array "dist" to its correct initial value.
	 * We set the source distance for you, do the rest.
	 */
	dist[source] = 0;

	/*
	 * 2. Put the source node into the queue.
	 * Note that vanilla queues are supported out of the box,
	 * and suffice for BFS.
	 * bfq -> breadth first queue. (yes I am very original)
	 */
	queue<int> bfq;

	while(!bfq.empty()) {
		int u = bfq.top();
		for (auto &v : E[u]) {
			/*
			 * note the naming convention that makes it easier
			 * to see what this loop is supposed to do.
			 *
			 * check if distance to v is improved by going through u,
			 * and update it if it is.
			 */
		}
	}
}
