#include<bits/stdc++.h>
using namespace std;
#define FOI(i, A, B) for(i=A; i<=B; i++)
#define FOD(i, A, B) for(i=A; i>=B; i--)
#define PI     acos(-1.0)
#define INF    1<<30
#define EPS    1e-9
#define sqr(x) (x)*(x)
const int maxn = 3E5 + 5;
const int mod = 1E9 + 7;

typedef unsigned int uint;
typedef long long int64;
typedef unsigned long long uint64;

int main(){
	
	while (true) {
 	    int t, x, y, d;
 	    scanf("%d", &t);
 	    if (t == 0) break;
	    x = y = (int) ceil(sqrt(t));
		d =  (x%2 ? 1 : -1) * (t - (int)(sqr(x-1) + x));
		x -= max(d, 0);
		y += min(d, 0);
		printf("%d %d\n", x, y);

	}

    return 0;
}