#include <iostream>
#include <functional>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(false)

typedef long long ll;
typedef pair <int, int> pii;

struct point {
	int X, Y;
	bool operator <(point other) const
	{
		/*
		 * modify this to
		 * compare first by X, break ties by Y
		 */
		return true;
	}
};

void print(vector<pii> X);
bool compare(pii a, pii b);

int main()
{
	fast_cin();

	vector<pii> S = {{1, 3}, {0, 9001}, {1, 2}};

	sort(S.begin(), S.end());
	print(S);

	sort(S.begin(), S.end(), greater<pii>());
	print(S);

	sort(S.begin(), S.end(), compare);
	print(S);

	vector<point> T = {{1, 3}, {0, 9001}, {1, 2}};
	/* look ma, no comparison function argument */
	sort(T.begin(), T.end());
}

void print(vector<pii> X)
{
	for (int i = 0; i < X.size(); ++i) {
		/*
		 * careful: the return type of X.size() is unsigned
		 * so don't try to subtract stuff from it
		 * for example, for 32 bit unsigned arithmetic
		 * 0 - 1 = 2 ^ 32 - 1
		 */

		cout << '(' << X[i].first << ", " << X[i].second << ") ";
	}
	cout << endl;
}

bool compare(pii a, pii b)
{
	/*
	 * modify this so that it 
	 * returns true iff a is further from origin than b
	 */
	return true;
}
