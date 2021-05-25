#include <stdio.h>
#include <string.h>
#include <list>

using namespace std;

int edge[51][51];
int n;
int degree[51];
list<int> cycle;
bool yet[51];

void findcycle(int x) {
	cycle.clear();
	while (degree[x] > 0) {
		cycle.push_back(x);
		for (int i = 1; i <= n; i++)
			if (edge[x][i] > 0) {
				edge[x][i]--;
				edge[i][x]--;
				degree[i]--;
				degree[x]--;
				x = i;
				break;
			}
	}
}

int dfs(int x) {
	int c = 0;
	for (int i = 1; i <= n; i++)
		if (edge[x][i] > 0 && yet[i]) {
			yet[i] = false;
			c += dfs(i);
		}
	return c + 1;
}

int main() {
	int t;
	scanf("%d", &t);

	for (int tt = 1; tt <= t; tt++) {

		int m;
		scanf("%d", &m);

		memset(edge, 0, sizeof(edge));
		memset(degree, 0, sizeof(degree));
		n = 0;

		for (int j = 0; j < m; j++) {
			int c1, c2;
			scanf("%d %d", &c1, &c2);
			edge[c1][c2]++;
			edge[c2][c1]++;
			degree[c1]++;
			degree[c2]++;
			if (c1 > n)
				n = c1;
			if (c2 > n)
				n = c2;
		}

		int odds = 0;
		int realn = 0;
		for (int i = 1; i <= n; i++) {
			if ((degree[i] & 1) == 1)
				odds++;
			if (degree[i] > 0)
				realn++;
		}

		printf("Case #%d\n", tt);
		if (odds > 0)
			printf("some beads may be lost\n");
		else {
			memset(yet, true, sizeof(yet));
			if (dfs(n) < realn)
				printf("some beads may be lost\n");
			else {
				list<int> main;
				main.push_back(n);
				for (list<int>::iterator I = main.begin(); I != main.end(); I++) {
					while (degree[*I] > 0) {
						findcycle(*I);
						if (!cycle.empty()) {
							main.insert(I, cycle.begin(), cycle.end());
							for (unsigned k = 0; k < cycle.size(); k++)
								I--;
						}
					}
				}
				list<int>::iterator I = main.begin();
				int previous = *I;
				for (I++; I != main.end(); I++) {
					printf("%d %d\n", previous, *I);
					previous = *I;
				}
			}
		}

		if (tt < t)
			printf("\n");
	}

	return 0;
}