#include <iostream>
#include <queue>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long long ll;
typedef pair<int, int> pii;

struct edge {
	int v, w;
};

struct queue_node {
	ll dist; int u;

	bool operator >(const queue_node &other) const
	{
		/*
		 * Replace this with the code to compare this
		 * node with other.
		 * You want to return true iff this node is further
		 * than the other node
		 */
		return true;
	}

	bool operator <(const queue_node &other) const
	{
		/*
		 * Similar to previous function. But now you want to
		 * return true iff this node is closer.
		 */
		return true;
	}
};

const int max_N = 1e5 + 10;
const ll inf = 1e15 + 42;
ll dist[max_N]; int popped[max_N];
vector< edge > E[max_N];

void dijkstra(int source, int N);

int main()
{
	fast_cin();

	int N, M;
	cin >> N >> M;
	for (int i = 0; i < M; ++i) {
		int u, v, w;
		cin >> u >> v >> w;

		/*
		 * Note that we are storing the edges in adjacency list form.
		 * So you want to push an edge going to v, with weight w
		 * to the adjacency list of u = E[u].
		 * And similarly an edge going to u, with weight w to E[v].
		 */
	}

	int source, target;
	cin >> source >> target;
	dijkstra(source, N);
	cout << dist[target] << endl;
}

void dijkstra(int source, int N)
{
	/*
	 * Initialisation:
	 * 1. Set the array "dist" to its correct initial value.
	 * We set the source distance for you, do the rest.
	 */
	dist[source] = 0;

	/*
	 * 2. Make an object of priority_queue with the right type.
	 * The line below creates a max-heap, change the template arguments
	 * so it becomes a min-heap.
	 * Note that the first argument is the type of each element of dfq,
	 * the second argument is the type of the underlying container,
	 * and the third argument is the comparator function.
	 * 3. Insert the source node into the priority_queue.
	 */
	priority_queue< queue_node, vector<queue_node>, less<queue_node> > dfq;

	while(!dfq.empty()) {
		int u = dfq.top().u;
		dfq.pop();
		if (!popped[u]) {
			/* u was not popped before this, but it's been popped now */
			popped[u] = 1;
			for (auto &e : E[u]) {

				/*
				 * check if distance to e.v is improved, and update it if it is
				 * remember that distance to e.v through u is dist[u] + e.w
				 */
			}
		}
	}
}
